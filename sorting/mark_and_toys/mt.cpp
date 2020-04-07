#include<bits/stdc++.h>
void quicksort(std::vector<int>& arr, int l, int r);

int maximumToys(std::vector<int> prices, int k) {
    quicksort(prices, 0, prices.size() - 1);
    for(auto x : prices) 
        std::cout << x << ' ';
    std::cout << "\n";

    int counter = 0;
    int i = 0;
    while(counter <= k && i != prices.size()) {
        counter += prices[i];
        i++;
    }
    return i-1;
}

void quicksort(std::vector<int>& arr, int l, int r) {
    if (l >= r)
        return;
    
    int pivot = arr[r];
    int cnt = l;
    for (int i = l; i <= r; i++) {
        if (arr[i] <= pivot) {
            std::swap(arr[cnt], arr[i]);
            cnt++;
        }
    }
    quicksort(arr, l, cnt - 2);
    quicksort(arr, cnt, r);
}

int main() {
    std::vector<int> vec = {1, 12, 5, 111, 200, 1000, 10};
    int result = maximumToys(vec, 50);
    std::cout << "result: " << result << std::endl;
    return 0;
}