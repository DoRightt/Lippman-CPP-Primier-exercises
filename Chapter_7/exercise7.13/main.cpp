#include <iostream>
#include <vector>
#include "../../libs/Sales_data.h"

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    Sales_data total(cin);

    if (cin) {
        Sales_data trans(cin);

        while (cin) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }

        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}