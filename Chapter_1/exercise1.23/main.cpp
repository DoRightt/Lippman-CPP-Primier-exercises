#include <iostream>
#include "../../libs/Sales_item.h"

int main() {
    Sales_item curItem;
    Sales_item item;

    std::cout << "Start input transactions: " << std::endl;

    if (std::cin >> curItem) {
        int counter = 1;

        while (std::cin >> item) {
            if (item.isbn() == curItem.isbn()) {
                ++counter;
            } else {
                std::cout << curItem.isbn() << ": " << counter << std::endl;
                curItem = item;
                counter = 1;
            }
        }

        std::cout << curItem.isbn() << ": " << counter << std::endl;
    }

    return 0;
}