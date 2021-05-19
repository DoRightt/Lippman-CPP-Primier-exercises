#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::vector;
using std::pair;

int main() {
    vector<pair<string, int>> v;
    string str;
    int n;

    while (cin >> str >> n) {
        pair<string, int> p = {str, n};

        v.push_back(p);
    }

    for (const auto &val : v) {
        cout << val.first << " : " << val.second << endl;
    }

    return 0;
}