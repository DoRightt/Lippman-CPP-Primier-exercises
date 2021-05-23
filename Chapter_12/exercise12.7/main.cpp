#include <iostream>
#include <vector>
#include <memory>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::shared_ptr;
using std::make_shared;
using std::vector;

shared_ptr<vector<int>> vector_factory() {
    return make_shared<vector<int>>();
}

void read(shared_ptr<vector<int>> v) {
    int n;

    while (cin >> n) {
        v->push_back(n);
    }
}

void print(shared_ptr<vector<int>> v) {
    for (const auto &val : *v) {
        cout << val << " ";
    }

    cout << endl;
}

int main() {
    auto vp = vector_factory();
    read(vp);
    print(vp);

    return 0;
}