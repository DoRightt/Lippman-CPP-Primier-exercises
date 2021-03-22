#include <iostream>


int main() {
    int val = 10;
    int end = 0;

    while(val >= end) {
        std::cout << val << std::endl;
        --val;
    }

    return 0;
}