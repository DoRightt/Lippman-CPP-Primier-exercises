#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

class HasPtr {
    friend void swap(HasPtr &rhs, HasPtr &lhs);

public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0) { }
    HasPtr(const char *cs) : ps(new std::string(cs)), i(0) { }
    HasPtr(const HasPtr &obj): ps(new string(*obj.ps)), i(obj.i) { }
    ~HasPtr();
    HasPtr& operator=(const HasPtr &rhs);
    bool operator<(const HasPtr &rhs) const;

    void swap(HasPtr &rhs);

    const string &get() {
        return *ps;
    }

private:
    string *ps;
    int i;
};

HasPtr::~HasPtr() {
    delete ps;
}

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
    auto newps = new std::string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;
    return *this;
}

bool HasPtr::operator<(const HasPtr &rhs) const {
    return *ps < *rhs.ps;
}

void HasPtr::swap(HasPtr &rhs) {
    using std::swap;
    swap(ps, rhs.ps);
    swap(i, rhs.i);
}

inline void swap(HasPtr &lhs, HasPtr &rhs) {
    lhs.swap(rhs);
}

int main() {
    vector<HasPtr> v{"Apple", "Orange", "Banana", "Watermelon"};

    cout << "Before sort: " << endl;
    for (auto &val : v) {
        cout << val.get() << endl;
    }

    cout << "After sort: " << endl;

    sort(v.begin(), v.end());

    for (auto &val : v) {
        cout << val.get() << endl;
    }

    return 0;
}