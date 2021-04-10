#include <iostream>
#include <cstring>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    char s1[] = "Test";
    char s2[] = "Array";
    char s3[16];

    strcpy(s3, s1);
    strcat(s3, s2);

    cout << s3 << endl;

    return 0;
}