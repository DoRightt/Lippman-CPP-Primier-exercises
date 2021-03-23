#include <iostream>
#include "../../libs/Sales_item.h"

int main() {
    Sales_item itemA;
    Sales_item itemB;
    Sales_item sum;

    std::cin >> itemA >> itemB;
    if (itemA.isbn() == itemB.isbn()) {
        sum = itemA + itemB;
        std::cout << "Sum is equal: " << sum << std::endl;
    } else {
        std::cout << "ISBN should be same" << std::endl;
    }

    return 0;
}