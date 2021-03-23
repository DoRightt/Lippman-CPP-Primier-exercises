#include <iostream>
#include "../../libs/Sales_item.h"

int main() {
    Sales_item sum;
    Sales_item item;

    std::cout << "Start input transactions: " << std::endl;

    if (std::cin >> item) {
        std::string curIsbn = item.isbn();
        sum += item;

        while (std::cin >> item) {
            if (item.isbn() == curIsbn) {
                sum += item;
            } else {
                std::cout << "ISBN should be equal" << std::endl;
                return -1;
            }
        }

        std::cout << "Total sum is equal: "<< sum << std::endl;
    }

    return 0;
}

