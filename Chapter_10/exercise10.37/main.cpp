#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <iterator>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::deque;
using std::end;
using std::begin;
using std::reverse_iterator;

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l(v.rbegin() + 2, v.rend() - 3);


    for (auto iter = l.begin(); iter != l.end(); ++iter) {
        cout << *iter << endl;
    }

    return 0;
}