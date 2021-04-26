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
    Sales_data total;

    if (read(cin, total)) {
        Sales_data trans;

        while (read(cin, trans)) {\
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