// Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.
// Objective: Introduce basic class structure

#include<iostream>
using namespace std;

class Calculator {
    public:
    int a, b;
    
    public:
    void input() {
        cout<<"Enter Value of A: ";
        cin>>a;
        
        cout<<"Enter Value of B: ";
        cin>>b;
    }
    
    void addition() {
        cout<< "a + b = " << a + b << endl;
    }

    void substraction() {
        cout<< "a - b = " << a - b << endl;
    }

    void multiplication() {
        cout<< "a X b = " << a * b << endl;
    }
    
    void division() {
        cout<< "a / b = " << a / b << endl;
    }
};

int main() {
    
    int choice;
    Calculator c = Calculator();
    
    
    cout<<"Press 1. Addition 2. Substraction  3.Multiplication 4. Division"<<endl;
    cin>>choice;
    
    c.input();
    
    switch (choice) {
        case 1:
        c.addition();
        break;
        
        case 2:
        c.substraction();
        break;
        
        case 3:
        c.multiplication();
        break;
        
        case 4:
        c.division();
        break;
        
        default:
        cout<<"Invalid Input!!";
        break;
        
    }

    return 0;
}