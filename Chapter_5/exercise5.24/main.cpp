#include <iostream>
#include <vector>
#include <stdexcept>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::runtime_error;

int main() {
    float n1, n2;

    cout << "Print two numbers: " << endl;

    try {
        cin >> n1 >> n2;

        if (n2 == 0) {
            throw runtime_error("Cannot be divided by zero");
        }

        cout << n1 << " / " << n2 << " = " << (n1 / n2) << endl;

    } catch (runtime_error err) {
        cout << err.what() << endl;
        return -1;
    }

    return 0;
}