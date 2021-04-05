#include <iostream>
#include "../../libs/Sales_data.h"

void ex1_20() {
    Sales_data item;
    double price = 0;
    while(std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
    }
}

int ex1_21() {
    Sales_data itemA;
    Sales_data itemB;
    int price;

    if (std::cin >> itemA.bookNo >> itemA.units_sold >> price) {
        itemA.revenue = itemA.units_sold * price;

        if (std::cin >> itemB.bookNo >> itemB.units_sold >> price) {
            itemB.revenue = itemB.units_sold * price;

            if (itemA.bookNo == itemB.bookNo) {
                unsigned sum = itemA.revenue + itemB.revenue;
                std::cout << "Sum is equal: " << sum << std::endl;
                return 0;
            } else {
                std::cout << "ISBN should be same" << std::endl;
                return -1;
            }
        } else {
            std::cout << "No data for item 2" << std::endl;
            return -1;
        }
    } else {
        std::cout << "No data for item 1" << std::endl;
        return -1;
    }
}

int ex1_22() {
    unsigned sum = 0;
    unsigned price = 0;
    Sales_data item;

    std::cout << "Start input transactions: " << std::endl;

    if (std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        std::string curIsbn = item.bookNo;
        sum += item.revenue;

        while (std::cin >> item.bookNo >> item.units_sold >> price) {
            if (item.bookNo == curIsbn) {
                item.revenue = item.units_sold * price;
                sum += item.revenue;
            } else {
                std::cout << "ISBN should be equal" << std::endl;
                return -1;
            }
        }

        std::cout << "Total sum is equal: "<< sum << std::endl;
    }

    return 0;
}

int ex1_23() {
    Sales_data curItem;
    Sales_data item;
    unsigned price = 0;

    std::cout << "Start input transactions: " << std::endl;

    if (std::cin >> curItem.bookNo >> curItem.units_sold >> price) {
        curItem.revenue = curItem.units_sold * price;
        int counter = 1;

        while (std::cin >> item.bookNo >> item.units_sold >> price) {
            item.revenue = item.units_sold * price;
            if (item.bookNo == curItem.bookNo) {
                ++counter;
            } else {
                std::cout << curItem.bookNo << ": " << counter << std::endl;
                curItem = item;
                counter = 1;
            }
        }

        std::cout << curItem.bookNo << ": " << counter << std::endl;
    }

    return 0;
}

int main() {
//    ex1_20();
//    ex1_21();
//    ex1_22();
//    ex1_23();

    return 0;
}