#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void f() {
    cout << "f version without arguments" << endl;
}

void f(int n) {
    cout << "f version with one int argument" << endl;
}

void f(int a, int b) {
    cout << "f version two int arguments" << endl;
}

void f(double a, double pi = 3.14) {
    cout << "f version two double arguments" << endl;
}

int main() {
    f(2.56, 42); // Error
    f(42); // With one int argument
    f(42, 0); // With two int arguments
    f(2.56, 3.14); // With two double arguments

    return 0;
}