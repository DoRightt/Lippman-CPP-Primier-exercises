#include <iostream>
#include <vector>
#include <list>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::end;
using std::begin;

int main() {
    list<char*> lc{"abc", "def", "xyz"};
    vector<string> vs;

    vs.assign(lc.begin(), lc.end());

    for (auto v : vs) {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}