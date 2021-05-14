#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    vector<string> v = {"1", "15", "10", "5", "23"};
    int sum = 0;

    for (const auto &val : v) {
        sum += stoi(    val);
    }

    cout << "Sum: " << sum << endl;

    return 0;
}