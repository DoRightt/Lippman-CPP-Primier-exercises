#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <utility>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::end;
using std::begin;
using std::map;
using std::pair;

typedef map<string, vector<pair<string, string>>> family_map;

void addFamily(family_map &families, string family_name) {
    families.insert({family_name, vector<pair<string, string>>()});
}

void addChild(family_map &families, string family_name, const string &child_name, const string &birthday) {
    auto it = families.find(family_name);

    if (it != families.end()) {
        it->second.push_back({child_name, birthday});
    } else {
        cerr << "Error: Cant find this family." << endl;
    }
}

int main() {
    family_map families;

    addFamily(families, "Petrov");
    addChild(families, "Petrov", "Ivan", "18-12-1990");
    addChild(families, "Petrov", "Andrey", "22-9-1990");
    addChild(families, "Petrov", "Leonid", "09-11-1966");

    for (auto fam : families) {
        cout << fam.first << " children: ";

        for (auto child : fam.second) {
            cout << "<" << child.first << " " << child.second << "> ";
        }
    }

    cout << endl;

    return 0;
}