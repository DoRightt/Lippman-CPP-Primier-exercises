#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int isEqual(string s1, string s2) {

    if (s1 == s2) {
        cout << "Strings are equal" << endl;
    } else if (s1 > s2) {
        cout << "First string is greater" << endl;
    } else {
        cout << "Second string is greater" << endl;
    }

    return 0;
}

int isEqualSize(string s1, string s2) {
    if (s1.size() == s2.size()) {
        cout << "Strings lengths are equal" << endl;
    } else if (s1.size() > s2.size()) {
        cout << "First string is longer" << endl;
    } else {
        cout << "Second string is longer" << endl;
    }

    return 0;
}

int main() {
    string s1 = "HOla test";
    string s2 = "Hola test";

    isEqualSize(s1, s2);

    return 0;
}