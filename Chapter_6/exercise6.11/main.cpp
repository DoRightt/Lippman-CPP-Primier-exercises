#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void reset(int& n);

int main() {
    int a = 10;

    reset(a);

    cout << "a: " << a << endl;

    return 0;
}

void reset(int& n) {
    n = 0;
}