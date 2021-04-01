#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int *p = &a;

    *p = 50;
    p = &b;

    std::cout << "a: "<< a << ", p: " << *p << std::endl;

    return 0;
}