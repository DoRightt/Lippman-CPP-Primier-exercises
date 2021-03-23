#include <iostream>
#include "../../libs/Sales_item.h"

int main() {
    Sales_item itemA;
    Sales_item itemB;
    Sales_item sum;

    std::cin >> itemA >> itemB;
    sum = itemA + itemB;
    std::cout << sum << std::endl;

    return 0;
}