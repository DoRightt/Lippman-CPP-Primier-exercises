#ifndef UNTITLED1_TEXTQUERY_H
#define UNTITLED1_TEXTQUERY_H

#include <vector>
#include <string>
#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <map>
#include "QueryResult.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::istringstream;
using std::ifstream;
using std::map;


class TextQuery {
public:
    vector<string> text;
    map<string, vector<int>> words;
    int row_number = 0;

    TextQuery(ifstream &);

    void read(ifstream &in) {
        string row;
        while (getline(in, row)) {
            setMap(row);
            text.push_back(row);
            ++row_number;
        }
    };

    void setMap(string row) {
        istringstream stream(row);
        string word;

        while (stream >> word) {
            if (words.find(word) == words.end()) {
                words.insert({word, vector<int>{row_number}});
            } else {
                words.find(word)->second.push_back(row_number);
            }
        }
    }

    QueryResult query(string &word) {

    }
};

TextQuery::TextQuery(ifstream &in) {
    read(in);
}


#endif //UNTITLED1_TEXTQUERY_H
