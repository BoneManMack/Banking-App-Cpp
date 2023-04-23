#include <vector>
#include <iostream>
#include "BankingData.h"
#include "InterestData.h"
using namespace std;

#ifndef INTERESTCALCULATOR_H
#define INTERESTCALCULATOR_H

// Function to calculate interest from BankingData object and move data to InterestData object
void interestCalculator(BankingData userBank, InterestData& userInterest) {
    int i; // Declares variable for for loop
    
    // Declares and assigns (when necessary) variables for storing accrued interest and year end balance with and without monthly deposits
    double monthlyCompoundedInterestRate = (userBank.getInterestRate() / 100) / 12;
    double monthlyInterestAccrued = 0.0;
    double yearToDateAccruedInterest = 0.0;
    double yearToDateBalance;
    double ytdBalanceNoMonthlyDeposit;
    double monthlyInterestAccruedNoMonthlyDepsoit;
    double ytdAccruedInterestNoMonthlyDeposit = 0.0;

    // Assigns year to date balance variables both with and without monthly deposits
    yearToDateBalance = userBank.getInitialDeposit() + userBank.getMonthlyDeposit();
    ytdBalanceNoMonthlyDeposit = userBank.getInitialDeposit();

    // For loop to calculate interest
    for (i = 0; i < userBank.getNumYears() * 12; ++i) {
        // Calculates monthly accrued interest and adds interest to year to date balance

        // with no monthly deposit
        monthlyInterestAccruedNoMonthlyDepsoit = ytdBalanceNoMonthlyDeposit * monthlyCompoundedInterestRate;
        ytdAccruedInterestNoMonthlyDeposit += monthlyInterestAccruedNoMonthlyDepsoit;
        ytdBalanceNoMonthlyDeposit += monthlyInterestAccruedNoMonthlyDepsoit;
        
        // with monthly deposit
        monthlyInterestAccrued = yearToDateBalance * monthlyCompoundedInterestRate;
        yearToDateAccruedInterest += monthlyInterestAccrued;
        yearToDateBalance += monthlyInterestAccrued;

        // Checks to see if it's the end of the year and if so calls InterestData member function to assign values
        if ((i + 1) % 12 == 0) {
            userInterest.setInterestData(
                userBank.getNumYears(),
                ((i + 1) / 12) - 1,
                round(ytdAccruedInterestNoMonthlyDeposit * 100) / 100,
                round(ytdBalanceNoMonthlyDeposit * 100) / 100,
                round(yearToDateAccruedInterest * 100) / 100,
                round(yearToDateBalance * 100) / 100
                );
        }

        // Adds monthly deposit to balance before loop continues
        yearToDateBalance += userBank.getMonthlyDeposit();
    }
}

#endif