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
    double price;

    if (cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans;

        while (cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }

        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}