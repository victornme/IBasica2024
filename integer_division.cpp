#include<iostream>
#include<stdlib.h>

int main() {

    int x, y, result, rest;

    std::cin >> x >> y;
    
    if(x < 0 ||  y < 0) {
        return 1;
    }

    result = x / y;
    rest = x % y;

    std::cout << result << " " << rest << std::endl;

    return 0;


}