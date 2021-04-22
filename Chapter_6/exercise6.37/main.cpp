#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

string (&func1())[10];

typedef string arrT[10];
arrT& func2() {};

auto func3() -> string(&)[10] {};

string s[10];
decltype(s) &func4() {};

int main() {

    return 0;
}