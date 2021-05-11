#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

vector<int>::const_iterator hasValue(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value) {
    while (begin != end) {
        if (*begin == value) {
            return begin;
        }
        ++begin;
    }

    return end;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto si = hasValue(v.cbegin(), v.cend(), 3);

    if (si == v.end()) {
        cout << "Not found" << endl;
    } else {
        cout << "Element " << *si << " was found at " << si - v.cbegin() << " position" << endl;
    }

    return 0;
}