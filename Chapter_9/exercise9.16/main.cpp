#include <iostream>
#include <vector>
#include <list>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::end;
using std::begin;

bool isEqual(list<int> li, vector<int> vi) {
    if (li.size() != vi.size()) {
        return false;
    }

    auto lit = li.cbegin();
    auto vit = vi.cbegin();

    while (lit != li.cend() && vit != vi.cend()) {
        if (*lit != *vit) {
            return false;
        }
        ++lit, ++vit;
    }

    return true;
}

int main() {
    vector<int> vi = {1, 2, 3};
    list<int> li = {1, 2, 3};

    cout << isEqual(li, vi) << endl;

    return 0;
}