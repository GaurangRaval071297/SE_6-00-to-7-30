//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
//operators. Perform operations using each type of operator and display the results.
//Objective: Reinforce understanding of different types of operators in C++.

#include<iostream>
using namespace std;

// Create a class
class Calculator {
public:
    int a, b;

    // Constructor to initialize values
    Calculator(int x, int y) {
        a = x;
        b = y;
    }

    // Arithmetic Operations
    void showArithmetic() {
        cout << "Arithmetic Operators:" << endl;
        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;
        cout << "a / b = " << a / b << endl;
        cout << "a % b = " << a % b << endl;
    }

    // Relational Operations
    void showRelational() {
        cout << "\nRelational Operators:" << endl;
        cout << "a == b: " << (a == b) << endl;
        cout << "a != b: " << (a != b) << endl;
        cout << "a > b: " << (a > b) << endl;
        cout << "a < b: " << (a < b) << endl;
    }

    // Logical Operations
    void showLogical() {
        cout << "\nLogical Operators:" << endl;
        cout << "(a > 0 && b > 0): " << (a > 0 && b > 0) << endl;
        cout << "(a > 0 || b < 0): " << (a > 0 || b < 0) << endl;
        cout << "!(a == b): " << !(a == b) << endl;
    }

    // Bitwise Operations
    void showBitwise() {
        cout << "\nBitwise Operators:" << endl;
        cout << "a & b = " << (a & b) << endl;
        cout << "a | b = " << (a | b) << endl;
        cout << "a ^ b = " << (a ^ b) << endl;
        cout << "~a = " << (~a) << endl;
    }
};

int main() {
    // Create object with values
    Calculator cal(10, 5);

    // Call functions
    cal.showArithmetic();
    cal.showRelational();
    cal.showLogical();
    cal.showBitwise();

    return 0;
}