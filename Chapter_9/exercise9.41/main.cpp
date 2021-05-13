#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    vector<char> vc = {'t', 'e', 's', 't'};
    string str(vc.begin(), vc.end());

    cout << str << endl;

    return 0;
}