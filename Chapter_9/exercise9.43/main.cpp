#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void f(string &s, const string &oldVal, const string &newVal) {
    for (auto it = s.begin(); it < s.end() - oldVal.size() + 1;) {
        auto oldit = oldVal.cbegin();

        for (auto newit = it; oldit != oldVal.end(); ++oldit, ++newit) {
            if (*newit != *oldit) {
                break;
            }
        }

        if (oldit == oldVal.cend()) {
            string::size_type pos = it - s.begin();
            s.erase(pos, oldVal.size());
            s.insert(pos, newVal);
            it = s.begin() + pos + newVal.size();
        } else {
            ++it;
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