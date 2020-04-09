#include <iostream>
#include<vector>
#include<numeric>
#include<algorithm>

bool isEven(unsigned number) {
    return number % 2 == 0;
}

bool divide(unsigned weight) {
    for (unsigned i = 1; i <= weight/2; i++) {
        int num1 = i;
        int num2 = weight - i;

        if(isEven(num1) && isEven(num2))
            return true;
    }
    
    return false;
}

bool divide2(unsigned weight) {
    return weight != 2 && weight % 2 == 0;
}



int main() {
    std::string s;
    std::cin >> s;
    
    std::string time = s.substr(8, 2);
    int num = std::stoi(s.substr(0, 2));
    std::string result = "";
    if(time == "PM") {
        if(num == 12) 
            result.append("12");
        else 
            result.append(std::to_string(num + 12));
        
        result.append(":");
        result.append(s.substr(3, 5));
    } else {
        if(num == 12) 
            result.append("00:");
        else 
            result.append(s.substr(0, 3));

        result.append(s.substr(3, 5));
    }


    return 0;
}