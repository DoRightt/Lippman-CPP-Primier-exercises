#include <iostream>
#include <vector>
#include <fstream>

using std::string;
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::ifstream;
using std::ofstream;

vector<string> f(const string& file_name) {
    vector<string> vs;
    ifstream in(file_name);

    if (in) {
        for (string s; getline(in, s);) {
            vs.push_back(s);
        }
    } else {
        cerr << "Fail: open file" << endl;
    }

    return vs;
}

int main() {
    auto vs = f("test");

    for (vector<string>::size_type i = 0; i < vs.size(); ++i) {
        cout << vs[i] << endl;
    }

    return 0;
}