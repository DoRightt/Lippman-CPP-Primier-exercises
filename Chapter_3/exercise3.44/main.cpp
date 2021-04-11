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
    constexpr size_t ia_row = 3;
    constexpr size_t ia_col = 4;
    int ia[ia_row][ia_col] = {
            {0, 1, 2, 3},
            {4, 5, 6, 7},
            {8, 9, 10, 11}
    };

    using int_array = int[ia_col];

    for (int_array &row : ia) {
        for (int col : row) {
            cout << col << ' ';
        }
        cout << endl;
    }

    for (size_t i = 0; i < ia_row; ++i) {
        for (size_t k = 0; k < ia_col; ++k) {
            cout << ia[i][k] << ' ';
        }
        cout << endl;
    }

    for (int_array *pr = ia; pr != ia + ia_row; ++pr) {
        for (int *pc = *pr; pc != *pr + ia_col; ++pc) {
            cout << *pc << ' ';
        }
        cout << endl;
    }


    return 0;
}