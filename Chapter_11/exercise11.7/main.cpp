#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::end;
using std::begin;
using std::map;

void addFamily(map<string, vector<string>> &families, string family_name) {
    families.insert({family_name, vector<string>()});
}

void addChild(map<string, vector<string>> &families, string family_name, string child_name) {
    auto it = families.find(family_name);

    if (it != families.end()) {
        it->second.push_back(child_name);
    } else {
        cerr << "Error: Cant find this family." << endl;
    }
}

int main() {
    map<string, vector<string>> families;

    addFamily(families, "Petrov");
    addChild(families, "Petrov", "Ivan");
    addChild(families, "Petrov", "Andrey");
    addChild(families, "Petrov", "Leonid");

    for (auto fam : families) {
        cout << fam.first << "children: ";

        for (auto child : fam.second) {
            cout << child << " ";
        }
    }

    cout << endl;

    return 0;
}