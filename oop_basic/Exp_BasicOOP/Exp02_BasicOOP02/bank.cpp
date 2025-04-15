#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class SavingsAccount {
private:
    char accountNumber[20]; // 账号
    char accountHolder[50]; // 户名
    char password[20];      // 密码
    double balance;         // 余额
    double interestRate;    // 年利率

public:
    // 构造函数
    SavingsAccount(const char* accNum, const char* holder, const char* pwd, double initialBalance, double rate) {
        strncpy(accountNumber, accNum, sizeof(accountNumber) - 1);
        accountNumber[sizeof(accountNumber) - 1] = '\0';
        strncpy(accountHolder, holder, sizeof(accountHolder) - 1);
        accountHolder[sizeof(accountHolder) - 1] = '\0';
        strncpy(password, pwd, sizeof(password) - 1);
        password[sizeof(password) - 1] = '\0';
        balance = initialBalance;
        interestRate = rate;
    }

    // 存钱
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! Current balance: " << fixed << setprecision(2) << balance << endl;
        } else {
            cout << "Deposit amount must be greater than 0!" << endl;
        }
    }

    // 取钱
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! Current balance: " << fixed << setprecision(2) << balance << endl;
        } else if (amount > balance) {
            cout << "Withdrawal amount exceeds balance!" << endl;
        } else {
            cout << "Withdrawal amount must be greater than 0!" << endl;
        }
    }

    // 计算年利息
    double calculateInterest() const {
        return balance * interestRate;
    }

    // 打印账户信息
    void printAccountInfo() const {
        cout << "Account Number: " << accountNumber << endl
             << "Account Holder: " << accountHolder << endl
             << "Balance: " << fixed << setprecision(2) << balance << endl << endl;
    }
};

int main() {
    SavingsAccount account("123456789", "Zhang San", "password123", 1000.0, 0.03);
    account.printAccountInfo();

    account.deposit(500.0);
    account.printAccountInfo();

    account.withdraw(300.0);
    account.printAccountInfo();

    // 计算年利息
    double interest = account.calculateInterest();
    cout << "Annual Interest: " << fixed << setprecision(2) << interest << endl;

    account.printAccountInfo();

    return 0;
}
