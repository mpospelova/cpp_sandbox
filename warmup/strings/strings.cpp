#include <bits/stdc++.h>

std::string superReducedString(std::string s) {
    int start = 0;
    int end = s.size();
    for(int i = 1; i < s.size(); i++) {
        std::cout << "i: " << i << std::endl;
        if(s.at(i) == s.at(i - 1)) {
            int indx1 = i;
            int indx2 = i - 1 + 1;
            std::string res = s.substr(start, indx1 - 1);
            res.append(s.substr(indx2 + 1, end - indx2));
            s = res;
            i = 0;
        }
        std::cout << s << std::endl;
        std::cout << "-------------" << std::endl;
    }
    if(s == "")
        return "Empty String";

    return s;
}

int camelcase(std::string s) {
    int counter = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s.at(i) >= 65 && s.at(i) <= 90)
            counter++;
    }
    return counter + 1;
}



int main() {
    std::string s = "saveChangesInTheEditor";
    int res = camelcase(s);
    std::cout << "res: " << res << std::endl;
    return 0;
}