#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main(int argc, char **argv) {

    for (int i = 1; i < argc; ++i) {
        cout << argv[i] << " " ;
    }

    cout << endl;
    return 0;
}