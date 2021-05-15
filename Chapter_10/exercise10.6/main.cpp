#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    vector<int> iv = {1, 2, 3, 4, 5, 6, 7};

    fill_n(iv.begin(), iv.size(), 0);

    for (const auto val : iv) {
        cout << val << endl;
    }

    return 0;
}