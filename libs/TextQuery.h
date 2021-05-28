#ifndef UNTITLED1_TEXTQUERY_H
#define UNTITLED1_TEXTQUERY_H

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
using std::map;
using std::set;
using std::shared_ptr;


class TextQuery {
public:
    typedef vector<string>::size_type line_no;

    TextQuery(ifstream &);

    QueryResult query(const string &sought) const;

private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &is): file(new vector<string>) {
    string text;

    while (getline(is, text)) {
        file->push_back(text);
        int n = file->size() - 1;

        istringstream line(text);
        string word;

        while (line >> word) {
            auto &lines = wm[word];

            if (!lines) {
                lines.reset(new set<line_no>);
            }

            lines->insert(n);
        }
    }
}

QueryResult TextQuery::query(const string &sought) const {
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(sought);

    if (loc == wm.end()) {
        return QueryResult(sought, nodata, file);
    } else {
        return QueryResult(sought, loc->second, file);
    }
}


#endif //UNTITLED1_TEXTQUERY_H
