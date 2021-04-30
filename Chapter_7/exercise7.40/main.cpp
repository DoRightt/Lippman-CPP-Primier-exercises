#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::istream;

class Vehicle {
public:
    string getName() const;
    string getBrand() const;
    unsigned getSpeed() const;

    Vehicle(): name(""), brand(""), speed(0) { };
    Vehicle(string nm, string br, unsigned sp): name(nm), brand(br), speed(sp) { };
    Vehicle(istream& is) {
        is >> name >> brand >> speed;
    };

private:
    string name;
    string brand;
    unsigned speed;
};

string Vehicle::getName() const {
    cout << name << endl;
    return name;
}

string Vehicle::getBrand() const {
    cout << brand << endl;
    return brand;
}


unsigned Vehicle::getSpeed() const {
    cout << speed << endl;
    return speed;
}


int main() {
    Vehicle car = Vehicle("Lancer", "Tayota", 160);
    Vehicle car2 = Vehicle(cin);

    return 0;
}
