#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int v1 = 0;
    int v2 = 0;
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << multiply(v1, v2);
    std::cout << std::endl;

    return 0;
}




