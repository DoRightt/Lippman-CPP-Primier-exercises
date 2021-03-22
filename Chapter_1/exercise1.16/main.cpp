#include <iostream>

int main() {
    int value = 0;
    int sum = 0;

    std::cout << "Start input numbers to add it to sum. When you finished press ctrl+D on UNIX or ctrl+Z on windows to stop input process and count sum" << std::endl;
    while(std::cin >> value) {
        sum += value;
    }

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}