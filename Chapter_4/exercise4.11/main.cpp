#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

bool check(int a, int b, int c, int d) {
    return (a > b) && (b > c) && (c > d);
}

int main() {

    if (check(4, 3, 2, 1)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}