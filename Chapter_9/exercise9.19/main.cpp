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
    string str;
    list<string> l;

    while(getline(cin, str)) {
        l.insert(l.end(), str);
    }

    for (auto v : l) {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}