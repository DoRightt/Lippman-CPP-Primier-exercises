#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int fact(int n) {
    int ret = 1;

    while (n > 1) {
        ret *= n--;
    }

    return ret;
}

int main() {
    int n;

    cout << "Print number to calc factorial: " << endl;
    cin >> n;

    cout << "Factorial of " << n << ": " << fact(n) << endl;
    return 0;
}

