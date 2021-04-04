//
// Created by cosmicintruder on 04.04.2021.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif //SALES_DATA_H
