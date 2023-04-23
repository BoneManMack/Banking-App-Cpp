/*
*
* Author: Evan Mackey
* Date: 2023-04-08
* 
* The purpose of this program is to allow a user to see yearly interest accrued based on
* initial investment, monthly deposits, and annual compounded interest rate
* for a period of years indicated by the user.
*
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include "BankingData.h"
#include "InterestData.h"
#include "InterestCalculator.h"
#include "UserInputs.h"
#include "PrintInterestBalance.h"
#include "ContinueLoop.h"
using namespace std;

int main() {
    // Creates Bank and Interest objects to store data
    BankingData userFinances;
    InterestData userAccruedInterest;
    
    // Calls initial user input function
    userInputs(userFinances);
    
    // Calls interest calculator
    interestCalculator(userFinances, userAccruedInterest);

    // Calls print function
    printBalanceAndInterest(userAccruedInterest);

    // Calls loop function to continue program
    continueBankingLoop(userFinances, userAccruedInterest);

    return 0;
}