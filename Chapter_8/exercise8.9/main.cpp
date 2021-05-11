#include <iostream>
#include <vector>
#include <sstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::istream;
using std::istringstream;

istream& f(istream& s) {
    auto old_state = s.rdstate();

    s.clear();
    string str;

    while (s >> str) {
        cout << str << " ";
    }

    s.setstate(old_state);

    cout << endl;

    return s;
}

int main() {
    string str = "test string";
    istringstream iss(str);
    f(iss);

    return 0;
}