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
using std::for_each;
using std::reverse_iterator;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    for (auto r_iter = v.rbegin(); r_iter != v.rend(); ++r_iter) {
        cout << *r_iter << endl;
    }

    return 0;
}