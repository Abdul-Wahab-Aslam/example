#include <iostream>

class SavingsAccount {
private:
    static double annualInterestRate;
    double savingsBalance;

public:
    SavingsAccount(double balance) : savingsBalance(balance) {}

    void calculateMonthlyInterest() {
        double monthlyInterest = (savingsBalance * annualInterestRate) / 12;
        savingsBalance += monthlyInterest;
    }

    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

    double getBalance() const {
        return savingsBalance;
    }
};

double SavingsAccount::annualInterestRate = 0.0; 

int main() {
    SavingsAccount saver1(15000.0);
    SavingsAccount saver2(30500.0);

    // Set annualInterestRate to 4%
    SavingsAccount::modifyInterestRate(0.04);

  
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    std::cout << "Balance for saver1 after one month is " << saver1.getBalance() << std::endl;
    std::cout << "Balance for saver2 after one month is " << saver2.getBalance() << std::endl;

    // Set annualInterestRate to 5%
    SavingsAccount::modifyInterestRate(0.05);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    std::cout << "Balance for saver1 after two months  is " << saver1.getBalance() << std::endl;
    std::cout << "Balance for saver2 after two months  is " << saver2.getBalance() << std::endl;

    return 0;
}

