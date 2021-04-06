#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    string stub = "some test string";

    for (auto &c : stub) {
        c = 'X';
    }

    cout << "Now string is: " << stub << endl;

    return 0;
}