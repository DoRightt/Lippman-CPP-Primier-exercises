#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::initializer_list;

int f(initializer_list<int> il) {
    int res = 0;
    for (auto beg = il.begin(); beg != il.end(); ++beg) {
        res += *beg;
    }

    return res;
}

int main() {

    cout << f({1, 2, 3, 4, 5}) << endl;

    return 0;
}