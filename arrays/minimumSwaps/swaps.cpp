#include <bits/stdc++.h>

int minimumSwaps(std::vector<int> arr) {
    int n = arr.size();
    std::pair<int, int> pairs[n];

    for(int i = 0; i < n; i++) {
        pairs[i].first = arr[i];
        pairs[i].second = i;
    }
    std::sort(pairs, pairs + n);

    std::vector<bool> visited(n, false);
    int res = 0;
    for(int i = 0; i < n; i++) {
        int cycle_size = 0;
        int j = i;
        while(!visited[j]) {
            visited[j] = true;
            j = pairs[j].second;
            cycle_size++;
        }

        if(cycle_size > 0) 
            res += (cycle_size - 1);
    }

    return res;
}

int main() {
    std::vector<int> vec = {2, 3, 4, 1, 5};
    int result = minimumSwaps(vec);
    std::cout << "res: " << result << std::endl;
    return 0;
}