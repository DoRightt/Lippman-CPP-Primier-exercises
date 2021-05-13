#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::forward_list;
using std::end;
using std::begin;

void f(list<int> &li) {
    auto iter = li.begin();

    while (iter != li.end()) {
        if (*iter % 2) {
            iter = li.insert(iter, *iter);
            ++iter, ++iter;
        } else {
            iter = li.erase(iter);
        }
    }
}

void f(forward_list<int> &flst) {
    auto prev = flst.before_begin();
    auto cur = flst.begin();

    while (cur != flst.end()) {
        if (*cur % 2) {
            cur = flst.insert_after(prev, *cur);
            ++prev, ++cur;
        } else {
            cur = flst.erase_after(prev);
        }
    }
}

int main() {
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    f(li);
    f(flst);

    return 0;
}