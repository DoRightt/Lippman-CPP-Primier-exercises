#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<string> toUpperCaseV(vector<string> v) {
    for (auto &word : v) {
        string newWord;

        for (auto i = 0; i < word.size(); ++i) {
            newWord += toupper(word[i]);
        }


        word = newWord;
    }

    return v;
}

int showVector(vector<string> v) {
    auto size = v.size();
    int counter = 0;

    cout << "Formatted vector: " << endl;

    for (auto i = 0; i < size; ++i) {
        cout << v[i] + " ";

        if (counter == 7) {
            cout << endl;
            counter = 0;
        } else {
            ++counter;
        }
    }

    cout << endl;

    return 0;
}

int main() {
    vector<string> v;
    string word;

    while(cin >> word) {
        v.push_back(word);
    }

    showVector(toUpperCaseV(v));

    return 0;
}