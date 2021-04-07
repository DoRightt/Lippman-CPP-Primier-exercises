#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    vector<int> v;
    int n;

    while(cin >> n) {
        v.push_back(n);
    }

    for (auto i = 0; i < v.size(); ++i) {
        if (v[i + 1]) {
            cout << "Sum of " << v[i] << " and " << v[i + 1] << " is equal: " << v[i] + v[i + 1] << endl;
        } else {
            cout << v[i] << " is last element and it has no pair" << endl;
        }
    }

    return 0;
}