#include <iostream>
#include <iomanip>
#include "BankingData.h"
using namespace std;

void userInputs(BankingData& userBankingData) {
    // Declare variables to store user inputs
    double newDeposit;
    double newMonthlyDeposit;
    double newInterestRate;
    int newNumYears;

    // Header for inputs
    cout << setw(102) << setfill('*') << "*" << endl;
    cout << setw(45) << setfill('*') << "*";
    cout << " Data Input ";
    cout << setw(45) << setfill('*') << "*" << endl;

    // Get initial user inputs
    cout << "Initial Investement Amount: ";
    cin >> newDeposit;
    cout << endl;

    cout << "Monthly Deposit: ";
    cin >> newMonthlyDeposit;
    cout << endl;

    cout << "Annual Interest: ";
    cin >> newInterestRate;
    cout << endl;

    cout << "Number of Years: ";
    cin >> newNumYears;
    cout << endl;

    // Requires user input to press any key to continue
    // While researching a way to do this I saw a lot of options that were OS specific
    // The one common thread I saw was not to use this but I couldn't find any other options that I could implement
    // Was I missing something?
    // #FIXME: find better way to implement pause
    system("pause");

    // Assigns user inputs 
    userBankingData.setBankingInputs(newDeposit, newMonthlyDeposit, newInterestRate, newNumYears);
}