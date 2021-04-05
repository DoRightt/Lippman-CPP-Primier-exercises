#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int lineReader() {
    string line;

    cout << "Input: " << endl;
    while(getline(cin, line)) {
        cout << "Input string: " << line << endl;
    }

    return 0;
}

int wordReader() {
    string word;

    cout << "Input: " << endl;
    while(cin >> word) {
        cout << "Input word: " << word << endl;
    }

    return 0;
}

int main() {
//    lineReader();
//    wordReader();

    return 0;
}