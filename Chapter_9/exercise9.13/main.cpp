#include <iostream>
#include <vector>
#include <list>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::list;

int main() {
    list<int> li = {1, 2, 3, 4, 5};
    vector<int> vi = {6, 7, 8, 9, 10};

    vector<double> vd1(li.begin(), li.end());
    vector<double> vd2(vi.begin(), vi.end());

    cout << vd1[0] << " " << vd2[0] << endl;

    return 0;
}