#include <bits/stdc++.h>

std::string twoStrings(std::string s1, std::string s2) {
    std::unordered_map<char, int> map;
    for(int i = 0; i < s1.size(); i++) {
        if(map[s1.at(i)] == 0)
            map[s1.at(i)] += 1;
    }

    std::sort(s2.begin(), s2.end());
    s2.erase(std::unique(s2.begin(), s2.end()), s2.end());
    for(int i = 0; i < s2.size(); i++) {
        std::cout << "s2 char: " << s2.at(i) << std::endl;
        map[s2.at(i)] += 1;
        if(map[s2.at(i)] > 1)
            return "YES";
    }

    return "NO";
}

int main() {
    std::string s1 = "wouldyoulikefries";
    std::string s2 = "abcabcabcabcabcabc";
    std::string result = twoStrings(s1, s2);

    std::cout << result << std::endl;
    return 0;
}