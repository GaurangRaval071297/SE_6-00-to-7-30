#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// Function to display welcome screen with current date and time
void welcomeScreen()
{
    // Get current UTC time
    time_t now = time(0);
    tm *utc = gmtime(&now); // UTC time

    // Convert UTC to IST (UTC + 5 hours 30 minutes)
    utc->tm_hour += 5;
    utc->tm_min += 30;

    // Normalize time values (in case of overflow like 60 minutes)
    mktime(utc);

    cout << "-------------------- WELCOME TO ATM --------------------" << endl;

    // Display formatted date: DD-MM-YYYY
    cout << "Current Date : " << put_time(utc, "%d-%m-%Y") << endl;

    // Display formatted time: HH:MM:SS AM/PM
    cout << "Current Time : " << put_time(utc, "%I:%M:%S %p") << " (IST)" << endl;

    cout << "--------------------------------------------------------" << endl;
}

// Function to display help screen
void getHelp()
{
    cout << "\nHelp Information:\n";
    cout << "You must have the correct PIN (12345) to access your account.\n";
    cout << "See your bank representative for assistance during working hours.\n";
    cout << "Thanks for your visit today!" << endl;
}

// Base Account class
class Account
{
public:
    static int totalBalance; // Shared among all accounts
};

int Account::totalBalance = 40000; // Initial Balance

// Class for depositing money
class DepositCash : public Account
{
public:
    int amount;
    void deposit()
    {
        cout << "Enter Amount to Deposit: ";
        cin >> amount;
        totalBalance += amount;
        cout << "Amount Deposited Successfully!" << endl;
        cout << "Current Balance: Rs. " << totalBalance << endl;
    }
};

// Class for withdrawing money
class WithdrawCash : public Account
{
public:
    int amount;
    void withdraw()
    {
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount > totalBalance)
        {
            cout << "Insufficient balance!" << endl;
            cout << "Unsuccessful Transaction. Sorry!!" << endl;
        }
        else
        {
            totalBalance -= amount;
            cout << "Withdrawal Successful!" << endl;
            cout << "Current Balance: Rs. " << totalBalance << endl;
        }
    }
};

// Class for checking balance
class BalanceInquiry : public Account
{
public:
    void showBalance()
    {
        cout << "Your Available Balance: Rs. " << totalBalance << endl;
    }
};

// Menu class to display options
class Menu
{
public:
    void showMenu()
    {
        int select;
        while (true)
        {
            cout << "\n-------------------- ATM MAIN MENU --------------------" << endl;
            cout << "1. Deposit Cash" << endl;
            cout << "2. Withdraw Cash" << endl;
            cout << "3. Balance Inquiry" << endl;
            cout << "0. Exit ATM" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Enter your choice: ";
            cin >> select;

            switch (select)
            {
            case 1:
            {
                DepositCash dc;
                dc.deposit();
                break;
            }
            case 2:
            {
                WithdrawCash wc;
                wc.withdraw();
                break;
            }
            case 3:
            {
                BalanceInquiry bi;
                bi.showBalance();
                break;
            }
            case 0:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
};

// Class to verify PIN
class CorrectPin
{
public:
    int enteredPin;
    void checkPswd()
    {
        cout << "\nEnter your ATM PIN (Only one attempt allowed): ";
        cin >> enteredPin;

        if (enteredPin == 12345)
        {
            cout << "Access Granted!" << endl;
            Menu m;
            m.showMenu();
        }
        else
        {
            cout << "Incorrect PIN! No more attempts allowed. Exiting..." << endl;
        }
    }
};

// Main ATM PIN Menu
class AtmPin
{
public:
    int press;
    void display()
    {
        cout << "\nATM ACCESS MENU:" << endl;
        cout << "Press 1 and Enter to access your account via PIN" << endl;
        cout << "Press 0 and Enter to view Help screen" << endl;
        cout << "Enter your choice: ";
        cin >> press;

        switch (press)
        {
        case 0:
            getHelp();
            break;
        case 1:
        {
            CorrectPin cp;
            cp.checkPswd();
            break;
        }
        default:
            cout << "Invalid input. Please restart the ATM session." << endl;
        }
    }
};

// Main Function
int main()
{
    welcomeScreen();

    AtmPin atm;
    atm.display();

    return 0;
}
