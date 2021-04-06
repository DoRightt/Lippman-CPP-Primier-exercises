#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int fFor(string &s) {
    auto size = s.size();
    for (string::size_type i = 0; i <= size; ++i) {
        s[i] = 'X';
    }

    return 0;
}

int fWhile(string &s) {
    auto size = s.size();
    string::size_type i = 0;

    while (i <= size) {
        s[i++] = 'X';
    }

    return 0;
}

int main() {
    string stub = "some test string";

//    fFor(stub);
//    fWhile(stub);

    cout << "Now string is: " << stub << endl;

    return 0;
}