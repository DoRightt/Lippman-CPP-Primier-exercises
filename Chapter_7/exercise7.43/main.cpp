#include <iostream>
#include <vector>

#include "../libs/Sales_data.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

class NoDefault {
public:
    NoDefault(int n): no(n) { };

private:
    no;
};

class C {
public:
    C(): no(0);

private:
    NoDefault no;
};

int main() {
    return 0;
}