#ifndef UNTITLED1_EMPLOYEE_H
#define UNTITLED1_EMPLOYEE_H

#include <string>

using std::string;

class Employee {
public:
    string name;
    int id;

    Employee() : id(++cur_id), name("") { }
    Employee(const string &s) : id(++cur_id), name(s) { }
    Employee(const Employee &e) : name(e.name), id(++cur_id) { }

    Employee& operator=(const Employee &e);

private:
    static int cur_id;
};

int Employee::cur_id = 0;

Employee& Employee::operator=(const Employee &e) {
    name = e.name;
    id = ++cur_id;

    return *this;
};

#endif //UNTITLED1_EMPLOYEE_H
