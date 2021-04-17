#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

bool isPrefix(vector<int> a, vector<int> b) {
    vector<int> small, big;

    if (a.size() > b.size()) {
        small = b;
        big = a;
    } else {
        small = a;
        big = b;
    }

    for (int i = 0; i < small.size(); ++i) {
        if (small[i] != big[i]) {
            cout << "Not prefix" << endl;
            return false;
        }
    }

    cout << "Prefix" << endl;
    return true;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7};

    isPrefix(a, b);

    return 0;
}