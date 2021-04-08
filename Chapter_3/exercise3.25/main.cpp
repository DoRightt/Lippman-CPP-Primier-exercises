#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;

    while(cin >> grade) {
        if (grade <= 100) {
            ++*(scores.begin() + grade / 10);
        }
    }

    for (auto item : scores) {
        cout << item << ' ';
    }
    cout << endl;

    return 0;
}