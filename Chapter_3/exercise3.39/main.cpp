#include <iostream>
#include <cstring>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int cmpCppStrings() {
    string s1, s2;

    cin >> s1 >> s2;

    if (s1 == s2) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}

int cmpCString() {
    char cs1[128];
    char cs2[128];

    cin >> cs1 >> cs2;

    if (!strcmp(cs1, cs2)) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}

int main() {
    cmpCppStrings();

    return 0;
}