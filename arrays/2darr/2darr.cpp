// problem statement: https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
#include <bits/stdc++.h>
int helper(int i, int j, std::vector<std::vector<int>> arr);

int hourglassSum(std::vector<std::vector<int>> arr) {
    std::vector<int>result;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int x = helper(i, j, arr);
            result.push_back(x);
        }
    }

    return *std::max_element(result.begin(), result.end());
}

int helper(int i, int j, std::vector<std::vector<int>> arr) {
    std::vector<std::vector<int>> res;
    for(int x = i; x < i+3; x++) {
        std::vector<int>temp;
        for(int y = j; y < j+3; y++) {
            temp.push_back(arr[x][y]);
        }
        res.push_back(temp);
    }
    res[1][0] = 0;
    res[1][2] = 0;
    int sum = 0;
    for(int i = 0; i < res.size(); i++) {
        std::for_each(res[i].begin(), res[i].end(), [&] (int n) {sum += n;});
    }
    std::cout << "sum: " << sum << std::endl;
    return sum;
}


int main() {
    std::vector<std::vector<int>> arr = {{-9, -9, -9,  1, 1, 1},
                                        {0, -9, 0, 4, 3, 2},
                                        {-9, -9, -9, 1, 2, 3},
                                        {0, 0, 8, 6, 6, 0},
                                        {0, 0, 0, -2, 0, 0},
                                        {0, 0, 1, 2, 4, 0}};  
    int res = hourglassSum(arr);                                      
    std::cout << "res: " << res << std::endl;
    return 0;
}