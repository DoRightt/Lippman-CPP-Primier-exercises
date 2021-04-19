#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int f() {
    static int n = 0;

    return n++;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        cout << f() << endl;
    }

    return 0;
}