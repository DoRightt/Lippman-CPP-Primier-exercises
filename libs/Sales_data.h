#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

using std::string;
using std::istream;
using std::ostream;
using std::cout;
using std::endl;

struct Sales_data;
istream& read(istream &is, Sales_data &item);

class Sales_data {
friend istream& read(istream&, Sales_data&);
friend ostream& print(ostream&, const Sales_data&);
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const;

public:
    Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p*n) {};
    Sales_data(): Sales_data("", 0, 0.0) {
        cout << "Sales_data()" << endl;
    };
    Sales_data(const string &s): Sales_data(s, 0, 0.0) {
        cout << "Sales_data(string&)" << endl;
    };
    Sales_data(istream &is): Sales_data() {
        cout << "Sales_data(istream&)" << endl;
        read(is, *this);
    };

    string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

istream& read(istream &is, Sales_data &item) {
    double price = 0;

    is >> item.bookNo >> item.units_sold >> price;

    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " "
        << item.units_sold << " "
        << item.revenue << " "
        << item.avg_price();

    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}

inline
double Sales_data::avg_price() const {
    if (units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}

#endif //SALES_DATA_H
