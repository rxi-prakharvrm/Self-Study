#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    long long accNo;
    double balance;

public:
    BankAccount(long long accNo, double balance) {
        this->accNo = accNo;
        this->balance = balance;
    }

    string now() {
        time_t currentTime = time(0);
        tm* localTime = localtime(&currentTime);

        // Adjust month and year values to get correct values
        int month = localTime->tm_mon + 1; // tm_mon ranges from 0 to 11
        int year = localTime->tm_year + 1900; // tm_year is years since 1900

        // Construct the string representation of the current time
        string currentDateTime = to_string(localTime->tm_mday) + "-" +
                                to_string(month) + "-" +
                                to_string(year) + " " +
                                to_string(localTime->tm_hour) + ":" +
                                to_string(localTime->tm_min);

        return currentDateTime;
    }

    void deposit(double money, long long upi) {
        this->balance += money;

        cout << "\nA/c XX" << accNo % 10000 << " credited for INR " << money << " on " << now() << " thru UPI. Available Bal INR " << balance << ". (UPI Ref ID " << upi << ")." << endl;
        cout << "--------------------------------------------------------------------------------------" << endl;
    }

    void withdraw(double money, long long upi) {
        this->balance -= money;

        cout << "\nA/c XX" << accNo % 10000 << " debited INR " << money << " Dt " << now() << " thru UPI:" << upi << ". Bal INR " << balance << "." << endl;
        cout << "--------------------------------------------------------------------------------------" << endl;
    }    
};

int main() {
    BankAccount Prakhar(243000001300, 7450.00);
    Prakhar.deposit(5000, 456738647592);
    Prakhar.withdraw(760, 456738647592);
    return 0;
}
