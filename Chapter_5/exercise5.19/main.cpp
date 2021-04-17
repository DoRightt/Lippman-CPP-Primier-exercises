#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    string s1, s2;
    cout << "Input two words to compare them length" << endl;

    do {

        cin >> s1 >> s2;

        if (s1.size() == s2.size()) {
            cout << "Strings are equal" << endl;
        } else if (s1.size() > s2.size()) {
            cout << "Second string is less" << endl;
        } else {
            cout << "First string is less" << endl;
        }

    } while (cin >> s1 >> s2);

    return 0;
}