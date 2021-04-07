#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    vector<string> v;
    string word;
    string result;

    while(cin >> word) {
        v.push_back(word);
    }

    for (unsigned i = 0; i < v.size(); ++i) {
        result += v[i] + (i + 1 == v.size() ? "" : ", ");
    }

    cout << "Vector: {" << result << "}" << endl;
    return 0;
}