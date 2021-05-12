#include <iostream>
#include <vector>
#include <list>
#include <deque>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
using std::deque;
using std::end;
using std::begin;

int main() {
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8};
    deque<int> dodd;
    deque<int> deven;

    for (auto v : l) {
        if (v % 2 == 0) {
            deven.push_back(v);
        } else {
            dodd.push_back(v);
        }
    }

    cout << "Odd numbers: " << endl;

    for (auto v : dodd) {
        cout << v << " ";
    }

    cout << endl;

    cout << "Even numbers: " << endl;

    for (auto v : deven) {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}