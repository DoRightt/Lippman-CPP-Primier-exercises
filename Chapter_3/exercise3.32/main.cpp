#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int arrCopy() {
    int arr[10];
    int arr2[10];

    for (size_t i = 0; i != 10; ++i) {
        arr[i] = i;
    }

    for (size_t i = 0; i != 10; ++i) {
        arr2[i] = arr[i];
    }

    return 0;
}

int vectorCopy() {
    vector<int> v;
    vector<int> v2;

    for (size_t i = 0; i != 10; ++i) {
        v.push_back(i);
    }

    v2 = v;

    return 0;
}

int main() {
    arrCopy();
    vectorCopy();

    return 0;
}