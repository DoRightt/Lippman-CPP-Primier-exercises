#include <iostream>


int main() {
    int val = 50;
    int end = 100;
    int sum = 0;

    while(val <= end) {
        sum += val;
        ++val;
    }

    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}