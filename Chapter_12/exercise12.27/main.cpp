#include <iostream>
#include <vector>
#include <fstream>
#include <initializer_list>
#include "../../libs/TextQuery.h"
#include "../../libs/QueryResult.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::ifstream;

void runQueries(std::ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        std::cout << "Enter word to look for, or 'q' to exit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q")
            break;
        print(std::cout, tq.query(s)) << std::endl;
    }
}

int main() {
    ifstream in("text");

    runQueries(in);

    return 0;
}