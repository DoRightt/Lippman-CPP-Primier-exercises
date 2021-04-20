#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

bool isContainUppercase(const string& str);
void capitalize(string& str);

int main() {
    string s = "tesT string";
    string s2 = "UPPER CASE";

    cout << isContainUppercase(s) << endl;

    capitalize(s2);

    cout << s2 << endl;

    return 0;
}

bool isContainUppercase(const string& str) {
    for (auto c : str) {
        if (c == toupper(c) && !isspace(c)) {
            return true;
        }
    }
    return false;
}

void capitalize(string& str) {
    for (auto &c : str) {
        c = tolower(c);
    }
}