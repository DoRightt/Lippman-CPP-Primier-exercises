#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    auto sum = [](int a, int b) { return a + b; };

    cout << sum(2, 3) << endl;

    return 0;
}