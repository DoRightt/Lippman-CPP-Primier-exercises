#ifndef LIPPMAN_C_PERSON_H
#define LIPPMAN_C_PERSON_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Person {
friend istream& read(istream&, Person&);
friend ostream& print(ostream&, const Person&);
private:
    string name;
    string address;

public:
    Person() = default;
    Person(const string& n): name(n) { };
    Person(const string& n, const string& a): name(n), address(a) { };
    Person(istream& is);

    string getName() const {
        return name;
    };
    string getAddress() const {
        return address;
    };
};

istream& read(istream& is, Person& person) {
    is >> person.name >> person.address;
    return is;
}

ostream& print(ostream& os, const Person& person) {
    os << person.getName() << " " << person.getAddress();
    return os;
}

Person::Person(std::istream &is) {
    read(is, *this);
}


#endif //LIPPMAN_C_PERSON_H
