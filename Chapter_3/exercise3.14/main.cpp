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

    cout << "Vector: " << endl;
    for (unsigned i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }

    return 0;
}