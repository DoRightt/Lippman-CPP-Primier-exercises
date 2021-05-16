#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::end;
using std::begin;
using std::unique_copy;
using std::sort;
using std::back_inserter;
using std::for_each;

int main() {
    vector<int> iv = {1, 6, 2, 3, 4, 5, 6 , 7, 7, 8, 9, 9};
    list<int> li;

    sort(iv.begin(), iv.end());
    unique_copy(iv.begin(), iv.end(), back_inserter(li));
    for_each(li.cbegin(), li.cend(), [](int n) { cout << n << " "; });

    cout << endl;

    return 0;
}