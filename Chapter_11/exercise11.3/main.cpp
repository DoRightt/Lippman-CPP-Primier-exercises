#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::set;
using std::map;

int main() {
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A"
                           "the", "but", "and", "or", "an", "a"};

    string word;

    while (cin >> word) {
        if (exclude.find(word) == exclude.end()) {
            ++word_count[word];
        }
    }

    return 0;
}