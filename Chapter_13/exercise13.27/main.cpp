#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr {
public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0), use(new size_t(1)) { }
    HasPtr(const HasPtr &obj): ps(new string(*obj.ps)), i(obj.i), use(obj.use) { ++*use; }
    ~HasPtr();
    HasPtr& operator=(const HasPtr &rhs);

    const string &get() {
        return *ps;
    }

private:
    string *ps;
    int i;
    size_t *use;
};

HasPtr::~HasPtr() {
    if (--*use == 0) {
        delete ps;
        delete use;
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
    ++*rhs.use;

    if (--*use == 0) {
        ps = rhs.ps;
        i = rhs.i;
        use = rhs.use;
        return *this;
    }
}

int main() {
    HasPtr h1 = {"Test"};
    HasPtr h2 = h1;

    cout << h2.get() << endl;

    return 0;
}