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
    const std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++"};
    std::string lettergrade;
    int grade;
    std::cin >> grade;

    lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];

    std::cout << lettergrade << std::endl;

    return 0;
}