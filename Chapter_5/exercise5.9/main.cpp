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
    int vowels = 0;
    string str;

    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        char curLetter = str[i];
        if (curLetter == 'a' || curLetter == 'o' || curLetter == 'i' || curLetter == 'u' || curLetter == 'e') {
            ++vowels;
        }
    }

    cout << "Count of vowels: " << vowels << endl;

    return 0;
}