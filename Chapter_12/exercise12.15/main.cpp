#include <iostream>
#include <vector>
#include <memory>

using std::string;
using std::cout;
using std::endl;
using std::shared_ptr;

struct destination {
    unsigned id;
};

struct connection {
    destination *d;
};

connection connect(destination *d) {
    connection con;
    con.d = d;

    return con;
};

void disconnect(connection con) {
    con.d = nullptr;
};

void f(destination &d) {
    connection con = connect(&d);
    shared_ptr<connection> sp(&con, [](connection *p) { disconnect(*p); });
    //...
}

int main() {

    return 0;
}