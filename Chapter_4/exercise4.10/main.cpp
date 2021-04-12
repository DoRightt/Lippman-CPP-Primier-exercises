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
    int i;

    while (cin >> i && i != 42) {}

    cout << "Done!" << endl;
    return 0;
}