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
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int arr[7];
    int *beg = arr;
    int *end = arr + v.size();

    for (auto i : v) {
        *beg++ = i;
    }

    for (beg = arr; beg != end; ++beg) {
        cout << *beg << endl;
    }

    return 0;
}