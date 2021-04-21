#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

void ptrSwap(int* &p1, int* &p2);

int main() {
    int a = 5;
    int b = 10;

    int* p1 = &a;
    int* p2 = &b;

    ptrSwap(p1, p2);

    cout << "p1: " << *p1 << ", p2: " << *p2 << endl;

    return 0;
}

void ptrSwap(int* &p1, int* &p2) {
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}