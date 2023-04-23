#include <iostream>
#include <iomanip>
#include <vector>
#include "InterestData.h"
#include "PrintBalanceHeader.h"
using namespace std;

#ifndef PRINTBANDI_H
#define PRINTBANDI_H

void printBalanceAndInterest(InterestData& printData) {
    int i; // Declares variable for for loop

    // Prints header for balance display without additional monthly deposits including call function for header
    cout << setw(79) << setfill(' ') << "Balance and Interest Without Additional Monthly Deposits" << endl; 
    printBalanceHeader();

    // For loop to print data from  interest object
    for (i = 0; i < printData.getVectorSize(); ++i) {
        // Prints year
        cout << setw(12) << setfill(' ') << i + 1;

        // Prints year end balance with no monthly deposits, uses if statement to control alignment on screen
        if (printData.getBalanceNoMonthly(i) < 10) {
            cout << setw(37) << setfill(' ') << '$';
        }
        else if (printData.getBalanceNoMonthly(i) < 100) {
            cout << setw(36) << setfill(' ') << '$';
        }
        else if (printData.getBalanceNoMonthly(i) < 1000) {
            cout << setw(35) << setfill(' ') << '$';
        }
        else if (printData.getBalanceNoMonthly(i) < 10000) {
            cout << setw(34) << setfill(' ') << '$';
        }
        else if (printData.getBalanceNoMonthly(i) < 100000) {
            cout << setw(33) << setfill(' ') << '$';
        }
        else if (printData.getBalanceNoMonthly(i) < 1000000) {
            cout << setw(32) << setfill(' ') << '$';
        }
        else if (printData.getBalanceNoMonthly(i) < 10000000) {
            cout << setw(31) << setfill(' ') << '$';
        }
        cout << fixed << setprecision(2) << printData.getBalanceNoMonthly(i);

        // Prints yearly accrued interest with no monthly deposits, uses if statement to control alignment on screen
        if (printData.getInterestNoMonthly(i) < 10) {
            cout << setw(37) << setfill(' ') << '$';
        }
        else if (printData.getInterestNoMonthly(i) < 100) {
            cout << setw(36) << setfill(' ') << '$';
        }
        else if (printData.getInterestNoMonthly(i) < 1000) {
            cout << setw(35) << setfill(' ') << '$';
        }
        else if (printData.getInterestNoMonthly(i) < 10000) {
            cout << setw(34) << setfill(' ') << '$';
        }
        else if (printData.getInterestNoMonthly(i) < 100000) {
            cout << setw(33) << setfill(' ') << '$';
        }
        else if (printData.getInterestNoMonthly(i) < 1000000) {
            cout << setw(32) << setfill(' ') << '$';
        }
        else if (printData.getInterestNoMonthly(i) < 10000000) {
            cout << setw(31) << setfill(' ') << '$';
        }
        cout << fixed << setprecision(2) << printData.getInterestNoMonthly(i) << endl;
    }

    // Creates space for legibility between two displays
    cout << endl;
    cout << endl;

    cout << setw(81) << setfill(' ') << "Balance and Interest With Additional Monthly Deposits" << endl; 
    printBalanceHeader();

    // For loop to print interest data with monthly deposits
    for (i = 0; i < printData.getVectorSize(); ++i) {
        cout << setw(12) << setfill(' ') << i + 1;

        // Prints year end balance with monthly deposits, uses if statement to control alignment on screen
        if (printData.getYearEndBalance(i) < 10) {
            cout << setw(37) << setfill(' ') << '$';
        }
        else if (printData.getYearEndBalance(i) < 100) {
            cout << setw(36) << setfill(' ') << '$';
        }
        else if (printData.getYearEndBalance(i) < 1000) {
            cout << setw(35) << setfill(' ') << '$';
        }
        else if (printData.getYearEndBalance(i) < 10000) {
            cout << setw(34) << setfill(' ') << '$';
        }
        else if (printData.getYearEndBalance(i) < 100000) {
            cout << setw(33) << setfill(' ') << '$';
        }
        else if (printData.getYearEndBalance(i) < 1000000) {
            cout << setw(32) << setfill(' ') << '$';
        }
        else if (printData.getYearEndBalance(i) < 10000000) {
            cout << setw(31) << setfill(' ') << '$';
        }
        cout << fixed << setprecision(2) << printData.getYearEndBalance(i);

        // Prints yearly accrued interest with monthly deposits, uses if statement to control alignment on screen
        if (printData.getInterestAccrued(i) < 10) {
            cout << setw(37) << setfill(' ') << '$';
        }
        else if (printData.getInterestAccrued(i) < 100) {
            cout << setw(36) << setfill(' ') << '$';
        }
        else if (printData.getInterestAccrued(i) < 1000) {
            cout << setw(35) << setfill(' ') << '$';
        }
        else if (printData.getInterestAccrued(i) < 10000) {
            cout << setw(34) << setfill(' ') << '$';
        }
        else if (printData.getInterestAccrued(i) < 100000) {
            cout << setw(33) << setfill(' ') << '$';
        }
        else if (printData.getInterestAccrued(i) < 1000000) {
            cout << setw(32) << setfill(' ') << '$';
        }
        else if (printData.getInterestAccrued(i) < 10000000) {
            cout << setw(31) << setfill(' ') << '$';
        }
        cout << fixed << setprecision(2) << printData.getInterestAccrued(i) << endl;
    }

    // Creates space after for legibility
    cout << endl;
    cout << endl;
}

#endif