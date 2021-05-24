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

void end_connection(connection *p) {
    disconnect(*p);
}

void f(destination &d) {
    connection con = connect(&d);
    shared_ptr<connection> sp(&con, end_connection);
    //...
}

int main() {

    return 0;
}