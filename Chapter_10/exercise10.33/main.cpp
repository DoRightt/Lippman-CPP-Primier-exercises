#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::vector;
using std::end;
using std::begin;
using std::for_each;
using std::sort;
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;

int main(int argc, char**argv) {
    if (argc < 4) {
        cerr << "You should use <input filename> <output filename> <output filename>" << endl;
        return -1;
    }

    ifstream in(argv[1]);
    ofstream outOdd(argv[2]);
    ofstream outEven(argv[3]);

    if (!in.is_open()) {
        cerr << "Error: Can't open file " << argv[1] << endl;
        return -2;
    }

    if (!outOdd.is_open()) {
        cerr << "Error: Can't open file " << argv[2] << endl;
        return -2;
    }

    if (!outEven.is_open()) {
        cerr << "Error: Can't open file " << argv[3] << endl;
        return -2;
    }

    istream_iterator<int> iter(in), eof;
    ostream_iterator<int> odd_iter(outOdd, " ");
    ostream_iterator<int> even_iter(outEven, " ");

    for_each(iter, eof, [&](int i) { i % 2 ? odd_iter = i : even_iter = i; });

    return 0;
}