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
    string word;
    string prevWord = "";

    cout << "Start printing words:" << endl;

    while (cin >> word) {
        if (word == prevWord) {
            cout << "Duplicate found" << endl;
            break;
        }

        prevWord = word;
    }

    return 0;
}