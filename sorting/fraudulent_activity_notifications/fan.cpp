#include<bits/stdc++.h>
int partition(std::vector<int>&arr, int l, int r);
int kthSmallest(std::vector<int>&arr, int l, int r, int k);
double median(std::vector<int> vec, int start_index, int end_index, int d, int current_index);

int hmmmm(std::vector<int>expenditure, int d) {
    int counter = 0;
    for(int i = d; i < expenditure.size(); i++) {
        std::cout << "i: " << i << std::endl;
        double med = median(expenditure, i - d, i - 1, d, i);
        std::cout << "median: " << med << std::endl;

        std::cout << "expenditure[i]: " << expenditure[i] << std::endl;
        if(med*2 <= expenditure[i])
            counter++;

        std::cout << "counter: " << counter << std::endl;
        std::cout << "================ " << std::endl;

    }
    return counter;
}

double median(std::vector<int>vec, int start_index, int end_index, int d, int current_index) {
    int median_index = current_index - (floor(d / 2) + 1);    
    auto it1 = vec.begin() + start_index;
    auto it2 = vec.begin() + end_index;
    std::sort(it1, it2);

    std::cout << "median index: " << median_index << std::endl;
    double median = vec[median_index];

    if(d % 2 == 0) {
        median_index = current_index - (floor(d / 2));
        std::cout << "second median index: " << median_index << std::endl;
        median += vec[median_index];
        median /= 2;
    }
    return median;
}   

int with_quickselect(std::vector<int>expenditure, int d) {
    int counter = 0;
    std::vector<int>temp = expenditure;
    int j = 0;
    for(int i = d; i < expenditure.size(); i++) {
        int next_indx = i - 1;
        double median = kthSmallest(expenditure, j, next_indx, floor(d / 2) + 1);
        if(d % 2 == 0) {
            expenditure = temp;
            median += kthSmallest(expenditure, j, next_indx, d / 2);
        }
        expenditure = temp;
        if(median*2 <= expenditure[i])
            counter++;
        j++;
    }
    return counter;
}

int kthSmallest(std::vector<int>&arr, int l, int r, int k) { 
    if (k > 0 && k <= r - l + 1) { 
        int pos = partition(arr, l, r); 
        if (pos-l == k-1) 
            return arr[pos];

        if (pos-l > k-1)
            return kthSmallest(arr, l, pos - 1, k); 
  
        return kthSmallest(arr, pos + 1, r, k - pos + l - 1); 
    } 
    return INT_MAX; 
}

int partition(std::vector<int>&arr, int l, int r) { 
    int x = arr[r], i = l; 
    for (int j = l; j <= r - 1; j++) { 
        if (arr[j] <= x) { 
            std::swap(arr[i], arr[j]); 
            i++; 
        } 
    } 
    std::swap(arr[i], arr[r]); 
    return i; 
}

double get_median(std::vector<int>count, int d) {
    int median_index = (d / 2) + 1;
    double median = 0;
    for(int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];

    for(int i = 0; i < count.size(); i++) {
        if(median_index <= count[i]) {
            median = i;
            break;
        }
    }

    if(d % 2 == 0) {
        median_index = d / 2;
        for(int i = 0; i < count.size(); i++) {
            if(median_index <= count[i]) {
                median += i;
                median /= 2;
                break;
            }
        }
    }
    return median * 2;
}

int activityNotifications(std::vector<int>expenditure, int d) {
    std::vector<int> count(201, 0);
    int counter = 0;

    for(int i = 0; i < d; i++)
        count[expenditure[i]]++;
    
    for(int i = d; i < expenditure.size(); i++) {
        double median = get_median(count, d);
        if(median <= expenditure[i])
            counter++;
        
        // keep track of last d elements
        count[expenditure[i - d]]--;
        count[expenditure[i]]++;
    }
    return counter;
}


int main() {
    int loops;
    int k;
    std::cin >> loops;
    std::cin >> k;
    std::vector<int>vec;
    for(int i = 0; i < loops; i++) {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }
    int res = activityNotifications(vec, k);
    std::cout << "res: " << res << std::endl;
}