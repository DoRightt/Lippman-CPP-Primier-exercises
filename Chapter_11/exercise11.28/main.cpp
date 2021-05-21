#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::map;

int main() {
    map<string, vector<int>> m = {
            {"A", {1, 2}},
            {"B", {3, 4}},
            {"C", {5, 6}}
    };

    map<string, vector<int>>::iterator it = m.find("B");

    cout << it->first << ": ";

    for (auto val : it->second) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}