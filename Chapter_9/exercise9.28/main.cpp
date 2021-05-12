#include <iostream>
#include <forward_list>

using std::string;
using std::cout;
using std::endl;
using std::forward_list;
using std::end;
using std::begin;

void f(forward_list<string>& flst, string& s1, string& s2) {
    auto prev = flst.before_begin();
    auto curr = flst.begin();

    while (curr != flst.end()) {
        if (*curr == s1) {
            flst.insert_after(curr, s2);
            return;
        } else {
            prev = curr;
            ++curr;
        }
    }

    flst.insert_after(prev, s2);
}

int main() {
    forward_list<string> flst = {"dilly", "billy", "willy"};
    string s1 = "donald";
    string s2 = "scrooge";

    f(flst, s1, s2);

    for (auto v : flst) {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}