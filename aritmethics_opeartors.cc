#include<iostream>

int main() {
    int x{6}, y{6};
    double result;

    result = x + y;
    std::cout << x << "+" << y << "=" << result << std::endl;
    
    result = x - y;
    std::cout << x << "-" << y << "=" << result << std::endl;

    result = x * y;
    std::cout << x << "*" << y << "=" << result << std::endl; 

    result = x / y;
    std::cout << x << "/" << y << "=" << result << std::endl;

    result = x % y;
    std::cout << x << "%" << y << "=" << result << std::endl;

    bool result1 = false;

    if(x == y) {
        result = true;
    }

    if(result == true) {
    std::cout << x << "=" << y << std::endl;
    }   else {
            std::cout << x << "!=" << y << std::endl;
        }
    return 0;
}