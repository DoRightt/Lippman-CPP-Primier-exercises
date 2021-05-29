#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr {
public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0) { }
    HasPtr(const HasPtr &obj): ps(new string(*obj.ps)), i(obj.i) { }
    ~HasPtr() { }
    HasPtr& operator=(const HasPtr &rhs);

    const string &get() {
        return *ps;
    }

private:
    string *ps;
    int i;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
    ps = new string(*rhs.ps);
    i = rhs.i;
    return *this;
}

int main() {
    HasPtr h1 = {"Test"};
    HasPtr h2 = h1;

    cout << h2.get() << endl;

    return 0;
}