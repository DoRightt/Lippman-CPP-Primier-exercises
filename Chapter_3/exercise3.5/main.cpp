#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string result = "";
    string substr;

    cout << "Input text: " << endl;

    while(getline(cin, substr)) {
        result += substr + " ";
    }

    cout << "Result string is:" << endl;
    cout << result << endl;

    return 0;
}