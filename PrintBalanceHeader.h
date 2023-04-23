#include <iostream>
#include <iomanip>
using namespace std;

#ifndef PRINTHEADER_H
#define PRINTHEADER_H

// Prints Header for balance display
void printBalanceHeader() {
    cout << setw(102) << setfill('=') << "=" << endl;
    cout << setw(12) << setfill(' ') << "Year";
    cout << setw(41) << setfill(' ') << "Year End Balance";
    cout << setw(41) << setfill(' ') << "Year End Earned Interest" << endl;
    cout << setw(102) << setfill('-') << "-" << endl;
}

#endif