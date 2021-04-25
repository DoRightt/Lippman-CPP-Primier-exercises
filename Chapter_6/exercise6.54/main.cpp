#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int f(int a, int b) {
    return 0;
}

int main() {
    vector<int (*)(int, int)> v;

    v.push_back(f);

    return 0;
}