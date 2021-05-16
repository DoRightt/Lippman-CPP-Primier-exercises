#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::vector;
using std::end;
using std::begin;
using std::for_each;
using std::unique_copy;
using std::sort;
using std::istream_iterator;
using std::ostream_iterator;

int main() {
    istream_iterator<int> i_iter(cin), eof;
    ostream_iterator<int> o_iter(cout, " ");
    vector<int> v(i_iter, eof);

    sort(v.begin(), v.end());
    unique_copy(v.begin(), v.end(), o_iter);

    return 0;
}