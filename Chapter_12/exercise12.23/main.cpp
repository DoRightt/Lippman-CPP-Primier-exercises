#include <iostream>
#include <cstring>
#include <string>


using std::string;
using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;
using std::strcat;

char* cF() {
    char *strA = "Privet ";
    char *strB = "Mir";
    char *strC = new char[strlen(strA) + strlen(strB) + 1];

    strcpy(strC, strA);
    strcat(strC, strB);

    return strC;
}

string cppF() {
    string strA = "Privet ";
    string strB = "Mir";
    string strC = strA + strB;

    return strC;
}

int main() {
    cout << cF() << endl;
    cout << cppF() << endl;

    return 0;
}