#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> vempty;

    cout << "By at(0): " << v.at(0) << "; By front(): " << v.front() << "; By back(): " << v.back() << "; By index[0]: " << v[0] << endl;

    cout << "Now empty vector: " << endl;

    cout << "By at(0): " << vempty.at(0) << "; By front(): " << vempty.front() << "; By back(): " << vempty.back() << "; By index[0]: " << vempty[0] << endl;

    return 0;
}