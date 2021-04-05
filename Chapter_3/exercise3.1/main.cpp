#include <iostream>
#include "../../libs/Sales_data.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;

int ex1_9() {
    int val = 50;
    int end = 100;
    int sum = 0;

    while(val <= end) {
        sum += val;
        ++val;
    }

    cout << "Sum of 50 to 100 inclusive is " << sum << endl;
    return 0;
}

int ex1_10() {
    int val = 10;
    int end = 0;

    while(val >= end) {
        cout << val << endl;
        --val;
    }

    return 0;
}

int ex1_11() {
    int a;
    int b;
    int temp;

    cout << "Input two numbers: " << endl;
    cin >> a >> b;

    if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }

    while(a <= b) {
        cout << a << endl;
        ++a;
    }

    return 0;
}

void ex1_20() {
    Sales_data item;
    double price = 0;
    while(cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        cout << item.bookNo << " " << item.units_sold << " " << item.revenue << endl;
    }
}

int ex1_21() {
    Sales_data itemA;
    Sales_data itemB;
    int price;

    if (cin >> itemA.bookNo >> itemA.units_sold >> price) {
        itemA.revenue = itemA.units_sold * price;

        if (cin >> itemB.bookNo >> itemB.units_sold >> price) {
            itemB.revenue = itemB.units_sold * price;

            if (itemA.bookNo == itemB.bookNo) {
                unsigned sum = itemA.revenue + itemB.revenue;
                cout << "Sum is equal: " << sum << endl;
                return 0;
            } else {
                cout << "ISBN should be same" << endl;
                return -1;
            }
        } else {
            cout << "No data for item 2" << endl;
            return -1;
        }
    } else {
        cout << "No data for item 1" << endl;
        return -1;
    }
}

int ex1_22() {
    unsigned sum = 0;
    unsigned price = 0;
    Sales_data item;

    cout << "Start input transactions: " << endl;

    if (cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        string curIsbn = item.bookNo;
        sum += item.revenue;

        while (cin >> item.bookNo >> item.units_sold >> price) {
            if (item.bookNo == curIsbn) {
                item.revenue = item.units_sold * price;
                sum += item.revenue;
            } else {
                cout << "ISBN should be equal" << endl;
                return -1;
            }
        }

        cout << "Total sum is equal: "<< sum << endl;
    }

    return 0;
}

int ex1_23() {
    Sales_data curItem;
    Sales_data item;
    unsigned price = 0;

    cout << "Start input transactions: " << endl;

    if (cin >> curItem.bookNo >> curItem.units_sold >> price) {
        curItem.revenue = curItem.units_sold * price;
        int counter = 1;

        while (cin >> item.bookNo >> item.units_sold >> price) {
            item.revenue = item.units_sold * price;
            if (item.bookNo == curItem.bookNo) {
                ++counter;
            } else {
                cout << curItem.bookNo << ": " << counter << endl;
                curItem = item;
                counter = 1;
            }
        }

        cout << curItem.bookNo << ": " << counter << endl;
    }

    return 0;
}


int main() {
//    ex1_9();
//    ex1_10();
//    ex1_11();
//    ex1_20();
//    ex1_21();
//    ex1_22();
//    ex1_23();

    return 0;
}