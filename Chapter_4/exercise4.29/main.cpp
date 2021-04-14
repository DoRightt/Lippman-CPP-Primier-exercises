#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    int x[10];
    int *p = x;

    cout << sizeof(x) / sizeof(*x) << endl; // 10: count of elements
    cout << sizeof(p) << endl; // 2: size of pointer / size of int

    return 0;
}

