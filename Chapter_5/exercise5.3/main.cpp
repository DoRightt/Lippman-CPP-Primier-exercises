#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    int val = 1;
    int sum = 0;

    while (val <= 10 && (sum += val, ++val));

    cout << val << " " << sum << endl;

    return 0;
}