#include <iostream>
#include <vector>

using std::vector;
using std::end;
using std::begin;

int main() {
    vector<int> v1; // Empty
    vector<int> v2(10); // 10 elements: 0
    vector<int> v3(10, 5); // 10 elements: 5
    vector<int> v4{1, 2, 3, 4 ,5}; // 5 elements: 1 2 3 4 5
    vector<int> v5 = {1, 2, 3, 4, 5}; // 5 elements: 1 2 3 4 5
    vector<int> v6(v1); // Empty
    vector<int> v7 = v1; //Empty
    vector<int> v8(v2.begin(), v2.end()); // 10 elements: 0

    return 0;
}