#include <iostream>
#include <vector>
#include <fstream>

#include "../../libs/Sales_data.h"

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

int main(int argc, char **argv) {
    if (argc < 2) {
        cerr << "Error: Print filename" << endl;
        return -2;
    }

    ifstream in(argv[1]);
    ofstream out(argv[2]);

    if (!in) {
        cerr << "Error: open file" << endl;
        return -3;
    }

    Sales_data total;

    if(read(in, total)) {
        Sales_data trans;

        while(read(in, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(out, total) << endl;
                total = trans;
            }
        }
        print(out, total) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}