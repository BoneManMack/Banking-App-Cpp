#include <iostream>
#include <string>
#include "UserChangeInputs.h"
#include "BankingData.h"
#include "InterestData.h"
#include "InterestCalculator.h"
#include "PrintInterestBalance.h"
using namespace std;

// Function for continuing program with altered inputs
void continueBankingLoop(BankingData& changeBankData, InterestData& changeInterestData) {
    bool continueLoop = true; // Declares and assigns variable to control loop
    string userInput; // Declares variable to get user input

    // Gets user input to continue
    cout << "Would you like to test different amounts for monthly deposits, interest rates, and lengths? type no to quit ";
    cin >> userInput;
    cout << endl;

    // Sets loop control to false if user doesn't want to test new inputs
    if (userInput == "no") {
        continueLoop = false;
    }

    // Loop to get new user inputs and print results
    while (continueLoop) {
        // Calls functions to change inputs, calculate data, and print results
        userChangeInputs(changeBankData);
        interestCalculator(changeBankData, changeInterestData);
        printBalanceAndInterest(changeInterestData);

        // Gets user input to continue
        cout << "Would you like to test different amounts for monthly deposits, interest rates, and lengths? type no to quit ";
        cin >> userInput;
        cout << endl;

        // Sets loop control to false if user doesn't want to test new inputs
        if (userInput == "no") {
            continueLoop = false;
        }
    }
}