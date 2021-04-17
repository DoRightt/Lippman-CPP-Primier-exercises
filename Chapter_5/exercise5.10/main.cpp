#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (std::cin >> ch) {
        switch(tolower(ch)) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
    std::cout << "Number of vowel a: " << aCnt << '\n'
              << "Number of vowel e: " << eCnt << '\n'
              << "Number of vowel i: " << iCnt << '\n'
              << "Number of vowel o: " << oCnt << '\n'
              << "Number of vowel u: " << uCnt << std::endl;

    return 0;
}