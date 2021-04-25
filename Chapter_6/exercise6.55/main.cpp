#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main() {
    vector<int (*)(int, int)> v;
    int a = 6;
    int b = 3;

    v.push_back(add);
    v.push_back(subtract);
    v.push_back(multiply);
    v.push_back(divide);

    for (auto &f : v) {
        f(a, b);
    }

    return 0;
}

int add(int a, int b) {
    cout << a << " + " << b  << " = " << a + b << endl;
    return a + b;
}

int subtract(int a, int b) {
    cout << a << " - " << b  << " = " << a - b << endl;
    return a - b;
}
int multiply(int a, int b) {
    cout << a << " * " << b  << " = " << a * b << endl;
    return a * b;
}

int divide(int a, int b) {
    cout << a << " / " << b  << " = " << a / b << endl;
    return a / b;
}