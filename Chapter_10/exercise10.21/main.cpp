#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    int n = 20;
    auto lam = [&n]() -> bool {
        --n;

        if (n == 0) {
            cout << "Zero" << endl;
        }

        return n == 0;
    };

    while (n != 0) {
        lam();

        cout << n << endl;
    }

    return 0;
}