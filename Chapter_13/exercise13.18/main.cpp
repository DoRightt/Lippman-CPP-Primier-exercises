#include <iostream>
#include <string>
#include "../../libs/Employee.h"

using std::string;
using std::cout;
using std::endl;


int main() {
    Employee empl;
    Employee empl2("Alexander");

    cout << "First employee: " << endl;
    cout << empl.name << " " << empl.id << endl;

    cout << "Second employee: " << endl;
    cout << empl2.name << " " << empl2.id << endl;

    return 0;
}