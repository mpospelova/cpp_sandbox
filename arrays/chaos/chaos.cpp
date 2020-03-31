// problem statement: https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs[]=interview-preparation-kit&playlist_slugs[]=arrays&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

void minimumBribes(std::vector<int> q) {
    int n = q.size();
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(q.at(i) - 1 - i > 2) {
            std::cout << "Too chaotic" << std::endl;
            return;
        }

        for(int j = i; j >= std::max(0, q[i] - 2); j--) {
            if(q[i] < q[j])
                res++;
        }
    }
    std::cout << res << std::endl;
}

void withBubbleSort(std::vector<int> q) {
    // using bubble sort
    int n = q.size();
    std::vector<int> swaps(q.size());
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++){
            if(q.at(j) > q.at(j + 1)) {
                swaps.at(q.at(j)-1) += 1;
                if(swaps.at(q.at(j)-1) > 2) {
                    std::cout << "Too chaotic" << std::endl;
                    return;
                }
                int x = q.at(j);
                q.at(j) = q.at(j + 1);
                q.at(j + 1) = x;
            }
        }
    }

    int sum = 0;
    std::for_each(swaps.begin(), swaps.end(), [&] (int n) {sum += n;});
    std::cout << sum  << std::endl;
}

int main() {
    std::vector<int> vec = {1, 2, 5, 3, 7, 8, 6, 4};
    minimumBribes(vec);
    return 0;
}