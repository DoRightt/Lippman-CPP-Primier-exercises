#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::deque;
using std::end;
using std::begin;
using std::back_inserter;
using std::for_each;
using std::inserter;
using std::back_inserter;
using std::front_inserter;

int main() {
    vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> inserter_cont;
    deque<int> back_inserter_cont;
    deque<int> front_inserter_cont;

    copy(iv.begin(), iv.end(), inserter(inserter_cont, inserter_cont.end()));
    copy(iv.begin(), iv.end(), back_inserter(back_inserter_cont));
    copy(iv.begin(), iv.end(), front_inserter(front_inserter_cont));

    cout << "Inserter: ";
    for_each(inserter_cont.begin(), inserter_cont.end(), [](int n) { cout << n << " "; });
    cout << endl;

    cout << "Back inserter: ";
    for_each(back_inserter_cont.begin(), back_inserter_cont.end(), [](int n) { cout << n << " "; });
    cout << endl;

    cout << "Front inserter: ";
    for_each(front_inserter_cont.begin(), front_inserter_cont.end(), [](int n) { cout << n << " "; });
    cout << endl;

    return 0;
}