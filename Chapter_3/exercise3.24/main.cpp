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

    for (auto item = v.cbegin(); item != v.cend(); ++item) {
        auto a = item;
        auto b = (item + 1);
        if (b != v.cend()) {
            cout << "Sum of " << *a << " and " << *b << " is equal: " << *a + *b << endl;
        } else {
            cout << *a << " is last element and it has no pair" << endl;
        }
    }

    return 0;
}