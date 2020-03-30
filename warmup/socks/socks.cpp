#include<iostream>
#include<vector>
#include<algorithm>

int sockMerchant(std::vector<int> socks) {
    int biggestElem = *std::max_element(socks.begin(), socks.end());
    std::vector<int> pairs(biggestElem);
    for(int i = 0; i < socks.size(); i++) {
        int pos = socks.at(i);
        pairs.at(pos - 1) = pairs.at(pos - 1) + 1;
    }

    int counter = 0;
    for(int i = 0; i < pairs.size(); i++) {
        if(pairs.at(i) != 0 && pairs.at(i) % 2 == 0)
            counter += pairs.at(i) / 2;
        else
            counter += (pairs.at(i) - 1) /2;
    }

    return counter;
}



int main() {
    std::vector<int> vec = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    int result = sockMerchant(vec);
    std::cout << result << std::endl;
    return 0;
}