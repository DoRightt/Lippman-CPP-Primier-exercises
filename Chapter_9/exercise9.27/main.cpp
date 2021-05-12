#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;
using std::end;
using std::begin;

int main() {
    forward_list<int> flst = {1, 2, 3, 4, 5, 6, 7, 8};

    auto prev = flst.before_begin();
    auto curr = flst.begin();

    while (curr != flst.end()) {
        if (*curr % 2) {
            curr = flst.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }

    for (int v : flst) {
        cout << v << endl;
    }

    return 0;
}