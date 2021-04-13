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
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    for (auto &i : v) {
        i = (i % 2 != 0 ? i*2 : i);
    }

    for (auto i : v) {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}