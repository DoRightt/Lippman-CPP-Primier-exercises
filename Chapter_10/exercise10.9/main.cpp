#include <iostream>
#include <vector>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());

    cout << "After unique: " << endl;
    for (auto v : words) {
        cout << v << endl;
    }
    cout << "Size: " << words.size() << endl;

    words.erase(end_unique, words.end());

    cout << "After erase: " << endl;
    for (auto v : words) {
        cout << v << endl;
    }
    cout << "Size: " << words.size() << endl;
}

int main() {
    vector<string> sv = {"mawgli", "tarzan", "duck tales", "duck tales"};

    elimDups(sv);
    return 0;
}