#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    string str;
    string newStr;

    cout << "Input your string:" << endl;
    getline(cin, str);

    for (auto &c : str) {
        if (!ispunct(c)) {
            newStr += c;
        }
    }

    cout << "Now string is: " << newStr << endl;

    return 0;
}