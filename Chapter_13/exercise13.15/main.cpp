#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class numbered {
public:
    numbered() : mysn(++n) { };
    numbered(numbered &) : mysn(++n) { };
    int mysn;

private:
    static int n;
};

int numbered::n = 0;

void f(numbered n) {
    // Because n is copy of argument msyn will be update
    cout << n.mysn << endl;
}

int main() {
    numbered a, b = a, c = b;
    f(a); f(b); f(c); // 4; 5; 6;

    return 0;
}