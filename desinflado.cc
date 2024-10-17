#include<iostream>

int main() {

    bool A, B, resultado, resultado1, resultado2, resultado3;

    // tabla de verdad de and
    A = false;
    B = false;

    resultado = A && B;
    resultado1 = A || B;
    resultado2 = !A;
    resultado3 = !B;

    std::cout << "A B " << "And " << "Or " << "Not" << std::endl;
    std::cout << "0 0  " << resultado << "  " << resultado1 << "  " << resultado2 << " " << resultado3 << std::endl;

    A = false;
    B = true;

    resultado = A && B;
    resultado1 = A || B;
    resultado2 = !A;
    resultado3 = !B;

    std::cout << "0 1  " << resultado << "  " << resultado1 << "  " << resultado2 << " " << resultado3 << std::endl;

    A = true;
    B = false;

    resultado = A && B;
    resultado1 = A || B;
    resultado2 = !A;
    resultado3 = !B;
    
    std::cout << "1 0  " << resultado << "  " << resultado1 << "  " << resultado2 << " " << resultado3 << std::endl;

    A = true;
    B = true;

    resultado = A && B;
    resultado1 = A || B;
    resultado2 = !A;
    resultado3 = !B;
    
    std::cout << "1 1  " << resultado << "  " << resultado1 << "  " << resultado2 << " " << resultado3 << std::endl;

    
    return 0;
}