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

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vi = {begin(ia), end(ia)};
    list<int> li = {begin(ia), end(ia)};

    for (auto it = vi.begin(); it != vi.end();) {
        if (*it % 2 == 0) {
            it = vi.erase(it);
        } else {
            ++it;
        }
    }

    for (auto it = li.begin(); it != li.end();) {
        if (*it % 2 == 0) {
            ++it;
        } else {
            it = li.erase(it);
        }
    }

    cout << "Vector: " << endl;

    for (int v : vi) {
        cout << v << " ";
    }
    cout << endl;

    cout << "List: " << endl;

    for (int v : li) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}