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
    int arr[] = {1, 2, 3, 4 ,5};
    vector<int> v(begin(arr), end(arr));

    for (auto i : v) {
        cout << i << endl;
    }

    return 0;
}