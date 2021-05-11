#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

bool hasValue(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value) {
    while (begin != end) {
        if (*begin == value) {
            return true;
        }
        ++begin;
    }

    return false;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << hasValue(v.begin(), v.end(), 6) << endl;

    return 0;
}