#ifndef LIPPMAN_C_PERSON_H
#define LIPPMAN_C_PERSON_H

#include <string>

using std::string;


class Person {
    string name;
    string address;

    string getName();
    string getAddress();
};


#endif //LIPPMAN_C_PERSON_H
