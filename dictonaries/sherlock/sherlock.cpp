#include <bits/stdc++.h>
std::unordered_map<std::string, int> substrings(std::string s);
int sherlockAndAnagrams(std::string s) {
    std::unordered_map<std::string, int> substring = substrings(s);
    int counter = 0;
    for(auto i : substring) {
        if(i.second > 1)
            counter += (i.second * (i.second - 1))/2;
    }
    return counter;
}

 std::unordered_map<std::string, int> substrings(std::string s) {
    std::unordered_map<std::string, int> result;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j <= i; j++) {
            std::string subst = s.substr(j, i - j + 1);
            std::sort(subst.begin(), subst.end()); // sorting has time complexity of O(nlogn)
            result[subst] += 1;
        }
    }
    return result;
}

int main() {
    std::string str = "kkkk";
    int res = sherlockAndAnagrams(str);
    std::cout << "res: " << res << std::endl;
    return 0;
}