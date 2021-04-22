#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void f(vector<int>::iterator bg, vector<int>::iterator end) {
    if (bg == end) {
        cout << endl;
        return;
    }

    cout << *bg << " ";

    f(bg+1, end);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 6};

    f(v.begin(), v.end());
    return 0;
}