#include <iostream>
#include <iomanip>
#include "BankingData.h"
using namespace std;

void userChangeInputs(BankingData& changeData) {
    double unchangedInitial = changeData.getInitialDeposit(); // Declares and assigns variable that the user can't change
    // Declares variables to store user inputs
    double changeMonthlyDeposit;
    double changeInterestRate;
    int changeNumYears;

    // Header for inputs
    cout << setw(102) << setfill('*') << "*" << endl;
    cout << setw(45) << setfill('*') << "*";
    cout << " Data Input ";
    cout << setw(45) << setfill('*') << "*" << endl;

    // Get new user inputs
    cout << "Monthly Deposit: ";
    cin >> changeMonthlyDeposit;
    cout << endl;

    cout << "Annual Interest: ";
    cin >> changeInterestRate;
    cout << endl;

    cout << "Number of Years: ";
    cin >> changeNumYears;
    cout << endl;

    // See note in UserInputs.h
    system("pause");

    // Assigns user inputs to BankingData object
    changeData.setBankingInputs(unchangedInitial, changeMonthlyDeposit, changeInterestRate, changeNumYears);
}