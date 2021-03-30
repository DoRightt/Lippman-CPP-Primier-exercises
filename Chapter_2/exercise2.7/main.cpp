#include <iostream>

int main() {
    std::string a = "Who goes with F\145rgus?\012"; // string literal: Who goes with Fergus?
    long double b = 3.14e1L; // long double: 31.4
    float c = 1024.f; // float: 1024
    long double d = 3.14L; // long double: 3.14

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    return 0;
}