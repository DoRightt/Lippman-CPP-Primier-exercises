#include <iostream>
#include <vector>
#include <fstream>
#include <initializer_list>
#include "../../libs/TextQuery.h"
#include "../../libs/QueryResult.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::ifstream;

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "Enter word to look for, or 'q' to exit: ";
        string s;
        if (!(cin >> s) || s == "q") {
            break;
        }

        print(cout, tq.query(s)) << endl;
    }
}

int main() {
    ifstream in("text");

    runQueries(in);

    return 0;
}