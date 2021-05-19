#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::list;
using std::end;
using std::begin;
using std::map;

int main() {
    map<string, list<int>> m = {
            {"mango",  {1,  5, 12}},
            {"apple",  {3,  7, 6}},
            {"durian", {66, 67}}
    };

    for (const auto &word : m) {
        cout << word.first << " on pages: ";

        for (const auto page : word.second) {
            cout << page << " ";
        }

        cout << endl;
    }

    return 0;
}