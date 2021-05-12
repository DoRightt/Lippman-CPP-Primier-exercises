#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

bool isEqual(vector<int> v1, vector<int> v2) {
    return v1 == v2;
}

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};

    cout << isEqual(v1, v2) << endl;

    return 0;
}