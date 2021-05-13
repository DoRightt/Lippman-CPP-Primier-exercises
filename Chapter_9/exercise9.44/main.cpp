#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void f(string &s, const string &oldVal, const string &newVal) {
    for (string::size_type i = 0; i < s.size();) {
        if (s.substr(i, oldVal.size()) == oldVal) {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size();
        } else {
            ++i;
        }
    }
}

int main() {
    string s{"thru tho"};

    f(s, "tho", "though");
    f(s, "thru", "through");

    cout << s << endl;

    return 0;
}