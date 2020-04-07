#include <bits/stdc++.h>

// using namespace std;

void countSwaps(std::vector<int> a) {
    int n = a.size();
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
                swaps++;
            }
        }
    }

    std::cout << "Array is sorted in " << swaps << " swaps.1" << std::endl;
    std::cout << "First Element: " << a[0] << std::endl;
    std::cout << "Last Element: " << a[a.size()-1] << std::endl;
}


int main() {
    std::vector<int> vec = {3, 2, 1};
    countSwaps(vec);
    return 0;
}