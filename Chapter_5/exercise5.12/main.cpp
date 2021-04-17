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
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, tabCnt = 0, spaceCnt = 0, nLineCnt = 0, ffCnt = 0, fiCnt = 0, flCnt = 0;
    char ch;
    bool fKeeper = false;

    while (cin.get(ch)) {
        switch (ch) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i': {
                ++iCnt;
                if (fKeeper) {
                    ++fiCnt;
                    fKeeper = false;
                }
            }
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
            case 'f': {
                if (fKeeper) {
                    ++ffCnt;
                } else {
                    fKeeper = true;
                }
            }
                break;
            case 'l': {
                if (fKeeper) {
                    ++flCnt;
                    fKeeper = false;
                }
            }
        }
    }
    std::cout << "Number of vowel a: " << aCnt << '\n'
              << "Number of vowel e: " << eCnt << '\n'
              << "Number of vowel i: " << iCnt << '\n'
              << "Number of vowel o: " << oCnt << '\n'
              << "Number of vowel u: " << uCnt << '\n'
              << "Number of ff: " << ffCnt << '\n'
              << "Number of fi: " << fiCnt << '\n'
              << "Number of fl: " << flCnt << '\n'
              << "Number of spaces: " << spaceCnt << '\n'
              << "Number of tabs: " << tabCnt << '\n'
              << "Number of new line symbols: " << nLineCnt << std::endl;

    return 0;
}