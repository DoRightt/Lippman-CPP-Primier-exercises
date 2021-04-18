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
    bool tryAgain;

    cout << "Print two numbers: " << endl;

    do {
        tryAgain = false;
        try {
            cin >> n1 >> n2;
            if (n2 == 0) {
                throw runtime_error("Cannot be divided by zero");
            }

            cout << n1 << " / " << n2 << " = " << (n1 / n2) << endl;

        } catch (runtime_error err) {
            cout << err.what() << "\nTry again? Enter (y/n)" << endl;

            char c;
            cin >> c;

            if (c == 'y' || c == 'Y') {
                tryAgain = true;
                cout << "Print numbers again: " << endl;
            }
        }
    } while (tryAgain);

    return 0;
}