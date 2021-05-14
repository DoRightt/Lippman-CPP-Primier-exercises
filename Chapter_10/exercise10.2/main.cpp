#include <iostream>
#include <list>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::list;
using std::end;
using std::begin;
using std::count;

int main() {
    list<int> v = {1, 2, 3, 1, 2, 3, 1, 2, 3, 2};

    cout << count(v.cbegin(), v.cend(), 2) << endl;

    return 0;
}