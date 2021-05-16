#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::end;
using std::begin;
using std::for_each;
using std::ifstream;
using std::istream_iterator;

int main() {
    vector<string> v;
    ifstream in("file.txt");

    if (!in.is_open()) {
        cerr << "Error: Can't open file" << endl;
        return -1;
    }

    istream_iterator<string> iter(in), eof;

    while (iter != eof) {
        v.push_back(*iter++);
    }

    for_each(v.cbegin(), v.cend(), [](string s) { cout << s << " "; });
    cout << endl;

    return 0;
}