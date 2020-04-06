// problem statement: https://www.hackerrank.com/challenges/count-triplets-1/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include <bits/stdc++.h>
long specialCase(std::vector<long> arr, long r);

long countTriplets(std::vector<long> arr, long r) {
    std::unordered_map<long, long> doubles, triples;
    long counter = 0;
    for(auto i : arr) {
        counter += triples[i];
        triples[i*r] += doubles[i];
        doubles[i*r] += 1;
    }
    return counter;
}

long wrongSolution(std::vector<long> arr, long r) {
    if(r == 1) 
        return pow(2, arr.size()/3 + arr.size()%3);

    if(arr.size() < 3)
        return 0;

    std::map<long, long> map;
    std::sort(arr.begin(), arr.end());  //O(nlogn) 
            //-> no! it is wrong to sort the array. the order of elements is important
    for(long i = 0; i < arr.size(); i++)   //O(n)
        map[arr[i]] += 1;

    long counter = 0;
    auto iterator =  std::prev(map.end(), 2);
    for(auto it = map.begin(); it!= iterator; it++) {
        bool wrong = false;
        long temp = 1;
        auto end = std::next(it, 3);
        for(auto it_pos = it; it_pos != end; it_pos++) {
            auto it_next = std::next(it_pos);

            if(it_pos->first * r != it_next->first && it_next != map.end()) {
                wrong = true;
                break;
            }
            temp *= it_pos->second;
        }
        if(!wrong)
            counter += temp;
    }

    return counter;
}

int main() {
    std::vector<long> vec = {1, 1, 1, 1};
    long res = countTriplets(vec,1);

    std::cout << "res: " << res << std::endl;
    return 0;
}

// As a base consider a triplet made up of numbers A,B and C (where B = A* r and C = A* r * r = B* r).

// For each value (say X) in the array, you have to consider that X may be an A, B and/or C in some triplet.

// When can X be a middle of a triplet (that is case X = B in the triplet)? -> when I already 
// have had one or more previous values which will fulfill the requirements of A for this B. 
// So we need to check if there are any previous A's "waiting" for this B. Here we just check 
// the map mentioned in the previous comment. If there's any that means that we need to consider how 
// many A's are "waiting" to know how many 2/3 complete triplets we'd now have with this X.

// Similarly to the previous comment we will then let future Cs know that we have these extra 
// 2/3 triplets ready. So store in map of almost complete triplets (ensuring that we add to any 
// previous ones already stored). This is the second part of the loop.

// Final case, when X completes one or more previously 2/3 complete triplets. Simply check 
// how many (if any incomplete triplets) are "waiting" for this value to become complete. 
// So check the map of 2/3 triplets and accumulate the result.

// In any case X can be an A of a future triplet so add it to the map2 so future 
// B's know of this A's existence -> Final part of the loop.





// Hi, this is very simple & very optimised approach. 
// Consider mp3 have a count of numbers which may form triplet if the (num * r) is identified once again.

// Similarly, mp2 have a count of numbers which may form doublet if the (num * r) is identified once again.

// Follow the below 3 steps for every num encountered. 
// So, First, we need to check whether the number num is in mp3, (i.e) num formed triplet or not.

//     If so, increment the count variable, else directly proceed step-2.
//     Also check whether (num * r) may form triplet. If so, increment the mp3[num * r], else directly proceed step-3.
//     Finally, increment the mp2[num * r] because (num * r) may form doublet in future.

// I hope this is helpful!