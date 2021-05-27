#include <iostream>
#include <vector>
#include <initializer_list>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    size_t size;

    cin >> size;

    char *arr = new char[size + 1];

    cin.get(arr, size + 1);

    cout << arr << endl;

    return 0;
}