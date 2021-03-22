#include <iostream>


int main() {
    int a;
    int b;
    int temp;

    std::cout << "Input two numbers: " << std::endl;
    std::cin >> a >> b;

    if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }

    while(a <= b) {
        std::cout << a << std::endl;
        ++a;
    }


    return 0;
}