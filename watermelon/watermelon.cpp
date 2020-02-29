#include <iostream>

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
    return weight != 2 && weight % 2 == 0
}



int main() {
    std::cout << "2 : " << divide(2) << std::endl;
    std::cout << "3 : " << divide(3) << std::endl;
    std::cout << "4 : " << divide(4) << std::endl;
    std::cout << "5 : " << divide(5) << std::endl;
    std::cout << "6 : " << divide(6) << std::endl;
    std::cout << "88 : " << divide(88) << std::endl;
    std::cout << "100 : " << divide(100) << std::endl;
    return 0;
}