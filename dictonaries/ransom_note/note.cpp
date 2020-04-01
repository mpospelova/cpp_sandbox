// problem statement: https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include <bits/stdc++.h>

void checkMagazine(std::vector<std::string> magazine, std::vector<std::string> note) {    
    std::unordered_map<std::string, int> map;
    for(int i = 0; i < magazine.size(); i++)
        map[magazine[i]]++;
    
    for(int i = 0; i < note.size(); i++) {
        map[note[i]]--;
        if(map[note[i]] < 0) {
            std::cout<< "No" <<std::endl;
            return;
        }
    }
    std::cout << "Yes" << std::endl;

}


void noContainers(std::vector<std::string> magazine, std::vector<std::string> note) {
    // but is too slow for some test cases.
    std::list<std::string> list;
    std::copy(magazine.begin(), magazine.end(), std::back_inserter( list ));

    for(int i = 0; i < note.size(); i++) {
        std::string current_str = note[i];
        auto found = std::find(list.begin(), list.end(), current_str);
        if(found != list.end()) {
            list.erase(found);
            continue;
        } 
        std::cout << "No" << std::endl;
        return;
    } 
    std::cout << "Yes" << std::endl;
}

int main() {
    std::vector<std::string> note = {"two", "times", "two", "four"};
    std::vector<std::string> magazine = {"two", "times", "three", "grand", "today", "night", "two", "four"};
    checkMagazine(magazine, note);

    return 0;
}