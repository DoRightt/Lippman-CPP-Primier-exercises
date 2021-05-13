#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void f(string &s, const string prefix, const string suffix) {
    s.insert(0, prefix);
    s.insert(s.size(), " " + suffix);
}

int main() {
    string s = "John Smith";


    cout << "Before: " << s << endl;
    f(s, "Mr.", "III");
    cout << "After: " << s << endl;

    return 0;
}