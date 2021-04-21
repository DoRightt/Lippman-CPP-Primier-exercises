#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int f(int n, int* ptr);

int main() {
    int a = 15;
    int b = 10;
    cout << f(a, &b) << endl;

    return 0;
}

int f(int n, int* ptr) {
    return n > *ptr ? n : *ptr;
}