#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::ifstream;
using std::ofstream;
using std::istringstream;

int main() {
    vector<string> vs;
    string str;

    ifstream in("test.txt");

    if (!in) {
        cerr << "Error: open file" << endl;
        return -1;
    }

    while (getline(in, str)) {
        vs.push_back(str);
    }

    for (vector<string>::size_type i = 0; i < vs.size(); ++i) {
        string word;
        istringstream iss(vs[i]);

        while (iss >> word) {
            cout << word << endl;
        }
    }

    return 0;
}