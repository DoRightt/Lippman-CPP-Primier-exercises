#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    int b = 3;
    auto sum = [b](int a) { return a + b; };

    cout << sum(2) << endl;

    return 0;
}