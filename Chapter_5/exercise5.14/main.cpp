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
    unsigned maxRepeat = 1;
    unsigned count = 1;
    string repWord = "";
    string prevWord = "";
    string word;

    while (cin >> word) {
        if (prevWord == word) {
            ++count;
        } else {
            if (count > maxRepeat) {
                maxRepeat = count;
                repWord = prevWord;
                count = 1;
            }
        }

        prevWord = word;
    }

    if (count > maxRepeat) {
        maxRepeat = count;
        repWord = prevWord;
        count = 1;
    }

    cout << "Word: " << repWord << " was repeated: " << maxRepeat << " times" << endl;

    return 0;
}