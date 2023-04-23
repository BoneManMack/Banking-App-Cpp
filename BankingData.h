#ifndef BANKINGINPUTS_H
#define BANKINGINPUTS_H

// Creates class object to collect user data
class BankingData {
    // Declares public accessors and mutators
    public:
        void setBankingInputs(double userDeposit, double userMonthlyDeposit, double userRate, int userNumYears);
        double getInitialDeposit() const;
        double getMonthlyDeposit() const;
        double getInterestRate() const;
        int getNumYears() const;
    // Declares private variables
    private:
        double initialDeposit;
        double monthlyDeposit;
        double interestRate;
        int numYears;
};

// Defines mutator function
void BankingData::setBankingInputs(double userDeposit, double userMonthlyDeposit, double userRate, int userNumYears) {
    initialDeposit = userDeposit;
    monthlyDeposit = userMonthlyDeposit;
    interestRate = userRate;
    numYears = userNumYears;
}

// Defines accessor function for initalDeposit
double BankingData::getInitialDeposit() const {
    return initialDeposit;
}

// Defines accessor function for monthlyDeposit
double BankingData::getMonthlyDeposit() const {
    return monthlyDeposit;
}

// Defines accessor function for interestRate
double BankingData::getInterestRate() const {
    return interestRate;
}

// Defines accessor function for numYears
int BankingData::getNumYears() const {
    return numYears;
}

#endif