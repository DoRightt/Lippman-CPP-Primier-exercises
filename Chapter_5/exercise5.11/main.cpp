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
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, tabCnt = 0, spaceCnt = 0, nLineCnt = 0;
    char ch;
    while (cin.get(ch)) {
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
            case ' ':
                ++spaceCnt;
                break;
            case '\n':
                ++nLineCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
        }
    }
    std::cout << "Number of vowel a: " << aCnt << '\n'
              << "Number of vowel e: " << eCnt << '\n'
              << "Number of vowel i: " << iCnt << '\n'
              << "Number of vowel o: " << oCnt << '\n'
              << "Number of vowel u: " << uCnt << '\n'
              << "Number of spaces: " << spaceCnt << '\n'
              << "Number of tabs: " << tabCnt << '\n'
              << "Number of new line symbols: " << nLineCnt << std::endl;

    return 0;
}