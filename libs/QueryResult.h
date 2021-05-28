#ifndef UNTITLED1_QUERYRESULT_H
#define UNTITLED1_QUERYRESULT_H

#include <vector>
#include <string>
#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <memory>
#include "QueryResult.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::istringstream;
using std::ifstream;
using std::ostream;
using std::map;
using std::set;
using std::shared_ptr;


class QueryResult {
    friend ostream &print(ostream&, const QueryResult&);
    typedef vector<string>::size_type line_no;

public:
    QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f): sought(s), lines(p), file(f) { }

private:
    string sought;
    shared_ptr<vector<string>> file;
    shared_ptr<set<line_no>> lines;
};

ostream &print(ostream &os, const QueryResult &qr);

string make_plural(int cnt, const string &s, const string &postfix = "s") {
    return cnt > 1 ? s + postfix : s;
}

ostream &print(ostream &os, const QueryResult &qr) {
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << make_plural(qr.lines->size(), "time", "s") << endl;

    for (auto num : *qr.lines) {
        os << "\t(line " << num + 1 <<  ") " << *(qr.file->begin() + num) << endl;
    }

    return os;
}


#endif //UNTITLED1_QUERYRESULT_H
