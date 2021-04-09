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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *pbeg = begin(arr);
    int *pend = end(arr);

    while (pbeg != pend) {
        *pbeg = 0;
        ++pbeg;
    }

    for (int i = 0; i != 8; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}