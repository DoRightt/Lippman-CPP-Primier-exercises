#include <iostream>

void funcA() {
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

    for (int i = a; i <= b; ++i) {
        std::cout << i << std::endl;
    }
}

void funcB() {
    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    }
}

void funcC() {
    int sum = 0;

    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }

    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
}

int main() {
    funcB();
    return 0;
}
