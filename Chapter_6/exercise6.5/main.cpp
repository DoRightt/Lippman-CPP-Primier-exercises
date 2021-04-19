#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int toAbs(int n) {
    return n < 0 ? n * -1 : n;
}

int main() {
    int n;

    cout << "Print number to get absolute value: " << endl;
    cin >> n;

    cout << "Absolute value of " << n << ": " << toAbs(n) << endl;

    return 0;
}