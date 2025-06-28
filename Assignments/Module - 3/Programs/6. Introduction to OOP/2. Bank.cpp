// Create a class BankAccount with data members like balance and member functions
// like deposit and withdraw. Implement encapsulation by keeping the data members
// private.
// Objective: Understand encapsulation in classes

#include<iostream>
using namespace std;

class Bank {
    private:
    int balance = 0;
    
    public:
    void deposit(int b) {
        balance = b;
    }
    
    int withdraw() {
        cout<<balance;
        return balance;
    }
};


int main()
{
    Bank b1 = Bank();
    b1.deposit(2000);
    b1.withdraw();
    
    return 0;
}

