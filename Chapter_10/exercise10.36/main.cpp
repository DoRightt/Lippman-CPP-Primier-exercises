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
using std::find;
using std::reverse_iterator;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 0, 6, 7, 0, 8};

    auto res = find(v.crbegin(), v.crend(), 0);

    cout << *res << " last position: " << res.base() - v.begin() - 1 << endl;

    return 0;
}