#include <vector>
using namespace std;

#ifndef INTERESTDATA_H
#define INTERESTDATA_H

// Creates Interest data object
class InterestData {
    // Declares public member accessor and mutator functions
    public:
        void setInterestData(int vectorSize, int i, double totalBalanceNoMonthly, double totalInterestNoMonthly, double totalYearEndBalance, double totalInterestAccrued);
        double getBalanceNoMonthly(int i);
        double getInterestNoMonthly(int i);
        double getYearEndBalance(int i);
        double getInterestAccrued(int i);
        int getVectorSize();
        // Declares vector variables to store interest and balance data
    private:
        vector<double> balanceNoMonthly;
        vector<double> interestNoMonthly;
        vector<double> yearEndBalance;
        vector<double> interestAccrued;
};

// Mutator to assign values to vector variables
void InterestData::setInterestData(int vectorSize, int i, double totalBalanceNoMonthly, double totalInterestNoMonthly, double totalYearEndBalance, double totalInterestAccrued) {
    balanceNoMonthly.resize(vectorSize);
    interestNoMonthly.resize(vectorSize);
    yearEndBalance.resize(vectorSize);
    interestAccrued.resize(vectorSize);
    balanceNoMonthly.at(i) = totalBalanceNoMonthly;
    interestNoMonthly.at(i) = totalInterestNoMonthly;
    yearEndBalance.at(i) = totalYearEndBalance;
    interestAccrued.at(i) = totalInterestAccrued;
}

// Accessor for vector size
int InterestData::getVectorSize() {
    return yearEndBalance.size();
}

// Accessor for balanceNoMonthly deposits
double InterestData::getBalanceNoMonthly(int i) {
    return balanceNoMonthly.at(i);
}

// Accessor for interestNoMonthly deposits
double InterestData::getInterestNoMonthly(int i) {
    return interestNoMonthly.at(i);
}

// Accessor for yearEndBalance with monthly deposits
double InterestData::getYearEndBalance(int i) {
    return yearEndBalance.at(i);
}

// Accessor for interestAccrued with monthly deposits
double InterestData::getInterestAccrued(int i) {
    return interestAccrued.at(i);
}

#endif