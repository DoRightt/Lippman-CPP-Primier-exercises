#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int isArrayEqual() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {0, 1, 2, 3, 4 ,5};
    auto sizeA = end(a) - begin(a);
    auto sizeB = end(b) - begin(b);
    int *pbegA = begin(a);
    int *pendA = end(a);
    int *pbegB = begin(b);
    int *pendB = end(b);

    if (sizeA != sizeB) {
        cout << "Arrays is not equal" << endl;
        return -1;
    }

    while (pbegA != pendA) {
        if (*pbegA != *pbegB) {
            cout << "Arrays is not equal" << endl;
            return -1;
        }

        ++pbegA;
        ++pbegB;
    }

    cout << "Arrays is Equal" << endl;

    return 0;
}

int isVectorEqual() {
    vector<int> v1 = {1, 2, 3, 4 ,5};
    vector<int> v2 = {1, 2, 3 ,4, 5};

    if (v1 == v2) {
        cout << "Vectors are equal" << endl;
        return 0;
    } else {
        cout << "Vectors are not equal" << endl;
        return -1;
    }
}


int main() {
    isVectorEqual();

    return 0;
}