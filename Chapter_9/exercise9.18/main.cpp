#include <iostream>
#include <vector>
#include <deque>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::deque;
using std::end;
using std::begin;

int main() {
    string str;
    deque<string> d;

    while(getline(cin, str)) {
        d.insert(d.end(), str);
    }

    for (auto v : d) {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}