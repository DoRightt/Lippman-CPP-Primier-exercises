#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::end;
using std::begin;
using std::map;
using std::multimap;

typedef multimap<string, string> authors_map;

int main() {
    authors_map authors;
    string name;

    authors.insert({"Dostoevsky", "Crime and punishment"});
    authors.insert({"Tolstoy", "Anna Karenina"});
    authors.insert({"Pushkin", "Ruslan and Ludmila"});
    authors.insert({"Gogol", "Nose"});
    authors.insert({"Griboedov", "A Her of Out Time"});

    do {
        cout << "All authors: " << endl;

        for (const auto &author : authors) {
            cout << "Author: " << author.first << "\nBook: " << author.second << "\n "<< endl;
        }

        cout << "Print name to delete: " << endl;

        getline(cin, name);

        auto it = authors.find(name);

        if (it != authors.end()) {
            authors.erase(it);
        } else {
            cout << "Cant find this author, try again" << endl;
        }


    } while (cin);

    return 0;
}