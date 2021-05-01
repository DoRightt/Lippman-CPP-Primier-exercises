#ifndef UNTITLED1_ACCOUNT_H
#define UNTITLED1_ACCOUNT_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Account {
    static constexpr int period = 30;
    friend ostream& print(ostream& os, const Account& ac);

public:
    Account(): Account("", 0.0) { };
    explicit Account(const string& n, double am): owner(n), amount(am), daily_tbl() { };

    void calculate() { amount += amount * interestRate; }
    ostream& print(ostream& os);

    static double rate() { return interestRate; }
    static void rate(double r) { interestRate = r ; }

private:
    string owner;
    double amount;
    double daily_tbl[period];
    static double interestRate;
    static double initRate();
};

double Account::initRate() {
    return 0.1;
}

ostream& print(ostream& os, const Account& ac) {
    os << ac.owner << " " << ac.amount << " " << ac.daily_tbl[0];

    return os;
}

#endif //UNTITLED1_ACCOUNT_H
