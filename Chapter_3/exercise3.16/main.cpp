#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int showIntVector(vector<int> v) {
    cout << "Vector: ";
    for (auto i : v) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

int showStrVector(vector<string> v) {
    cout << "Vector: ";
    for (auto i : v) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

int main() {
    vector<int> v1; // empty
    vector<int> v2(10); // ten default int elements (0)
    vector<int> v3(10, 42); // ten elements of 42
    vector<int> v4{10}; // one element 10
    vector<int> v5{10, 42}; // two elements, 10 and 42
    vector<string> v6{10}; // ten default string elements ("")
    vector<string> v7{10, "hi"}; // ten hi string elements

//    showIntVector(v5);
//    showStrVector(v7);

    return 0;
}