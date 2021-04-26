#include "Sales_data.h"

string Sales_data::isbn() {
    return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}
