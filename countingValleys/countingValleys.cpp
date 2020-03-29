#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

int countingValleys(int n, std::string s) {
    std::vector<int> numbers;
    std::vector<int> zeroes;
    char down = 'D';
    char up = 'U';

    int counter = 0;
    for(int i = 0; i < s.length(); i++) {
        numbers.push_back(counter);

        if(s.at(i) == down)
            counter -= 1;
        else
            counter += 1;
    }
    numbers.push_back(counter);

    auto second = numbers.begin();
    counter = 0;
    while(second != numbers.end()) {
        auto first = second;
        second = std::find_if(first+1, numbers.end(), [](auto x) {return x == 0;});

        int max = *std::max_element(first, second);
        if(max == 0)
            counter++;
        first = second;
    }
    return counter-1;
}

int main() {
    std::string s = "DDUUUUDD";
    int n = 3;
    int res = countingValleys(n, s);
    std::cout << "res: " << res << std::endl;
    return 0;
}