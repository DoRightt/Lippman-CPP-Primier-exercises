#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<int> *vector_factory() {
    return new vector<int>;
}

void read(vector<int> *v) {
    int n;

    while (cin >> n) {
        v->push_back(n);
    }
}

void print(vector<int> *v) {
    for (const auto &val : *v) {
        cout << val << " ";
    }

    cout << endl;
}

int main() {
    auto *vp = vector_factory();
    read(vp);
    print(vp);

    delete vp;

    return 0;
}