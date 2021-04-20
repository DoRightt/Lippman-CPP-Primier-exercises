#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void swap(int& a, int& b);

int main() {
    int a = 10;
    int b = 20;

    swap(a, b);

    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}