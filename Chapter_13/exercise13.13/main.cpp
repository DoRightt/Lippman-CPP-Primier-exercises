#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

struct X {
    X() { cout << "X()" << endl; }
    X(const X &) { cout << "X(const X&)" << endl; }
    X& operator=(const X &) { cout << "operator=" << endl; }
    ~X() { cout << "~destructor" << endl; }

};

int main() {
    cout << "Create X instance by default constructor: " << endl;
    X x1;

    cout << "Create X instance with &: " << endl;
    X x2(x1);


    cout << "End of scope:" << endl;
    return 0;
}