#include <iostream>
#include "../../libs/Sales_item.h"

int main() {
    Sales_item sum;
    Sales_item item;

    std::cout << "Start input transactions: " << std::endl;

    while (std::cin >> item) {
        sum += item;
    }

    std::cout << "Total sum is equal: "<< sum << std::endl;

    return 0;
}