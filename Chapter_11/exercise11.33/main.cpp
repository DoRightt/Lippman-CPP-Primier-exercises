#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::vector;
using std::end;
using std::begin;
using std::map;
using std::ifstream;
using std::istringstream;



const string&
transform(const string &s, const map<string, string> &m) {
    auto map_it  = m.find(s);

    if (map_it != m.cend()) {
        return map_it->second;
    } else {
        return s;
    }
}

map<string, string>
buildMap(ifstream &map_file) {
    map<string, string> trans_map;
    string key;
    string value;

    while (map_file >> key && getline(map_file, value)) {
        if (value.size() > 1) {
            trans_map.insert({key, value.substr(1)});
        } else {
            throw std::runtime_error("no rule for " + key);
        }
    }

    return trans_map;
}

void
word_transform(ifstream &map_file, ifstream &input) {
    auto trans_map = buildMap(map_file);
    string text;

    while (getline(input, text)) {
        istringstream stream(text);
        string word;
        bool firstword = true;

        while (stream >> word) {
            if (firstword) {
                firstword = false;
            } else {
                cout << " ";
            }
            cout << transform(word, trans_map);
        }
    }

    cout << endl;
}

int main(int argc, char **argv) {

    if (argc < 2) {
        cerr << "You should write input and output file names" << endl;
        return -1;
    }

    ifstream dict(argv[1]);
    ifstream in(argv[2]);

    if (!dict.is_open()) {
        cerr << "Error: cant open file: " << argv[1] << endl;
        return -2;
    }

    if (!in.is_open()) {
        cerr << "Error: cant open file: " << argv[2] << endl;
    }

    word_transform(dict, in);

    return 0;
}