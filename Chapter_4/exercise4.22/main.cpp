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
    int grade;
    string finalGrade;

    cin >> grade;

    finalGrade = (grade > 90) ? "high pass"
                              : (grade > 75) ? "medium pass"
                                              : (grade >= 60) ? "pass"
                                                              : "fail";

    if (grade > 90) {
        finalGrade = "high pass";
    } else if (grade > 75) {
        finalGrade = "medium pass";
    } else if (grade >= 60) {
        finalGrade = "pass";
    } else {
        finalGrade = "fail";
    }

    cout << finalGrade << endl;

    return 0;
}