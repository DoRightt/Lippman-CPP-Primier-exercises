#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::set;
using std::unordered_map;
using std::for_each;

string f(string s) {
    constexpr char *punct{"\"'`:*-_;,.?!()[]{}"};;
    for_each(s.begin(), s.end(), [](char &c) { c = tolower(c); });
    size_t bg = s.find_first_not_of(punct);
    size_t ed = s.find_last_not_of(punct);

    if (bg == string::npos) {
        return "";
    }

    return s.substr(bg, ed - bg + 1);
}

int main() {
    unordered_map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A"
                                                            "the", "but", "and", "or", "an", "a"};


    string word;

    while (cin >> word) {
        if (exclude.find(word) == exclude.end()) {
            ++word_count[f(word)];
        }
    }

    for (auto val : word_count) {
        cout << val.first << ": " << val.second << endl;
    }

    return 0;
}