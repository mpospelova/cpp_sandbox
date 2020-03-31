// problem statement: https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>


std::vector<int> rotLeft(std::vector<int> a, int d) {
    int rot = rot = d % a.size();

    std::vector<int>result;
    std::copy(a.begin()+rot, a.end(), std::back_inserter(result));
    std::copy(a.begin(), a.begin()+rot, std::back_inserter(result));

    return result;
}


int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result = rotLeft(vec, 10);

    for(int i = 0; i < result.size(); i++) {
        std::cout << result[i] << ' ';
    }
    
    return 0;
}