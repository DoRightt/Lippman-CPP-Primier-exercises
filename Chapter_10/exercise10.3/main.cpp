#include <iostream>
#include <vector>
#include <numeric>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::accumulate;

int main() {
    vector<int> v = {1, 2, 3, 4 ,5};

    cout << accumulate(v.cbegin(), v.cend(), 0) << endl;

    return 0;
}