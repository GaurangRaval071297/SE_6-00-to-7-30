//Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results.
//Objective: Understand basic array manipulation.

#include<iostream>
using namespace std;

class Calculation {
    public:
    int arr[100];
    int add_num, i, sums = 0, avrg;
    
    void display() {
        cout<<"How many number do you want to add? ";
        cin>>add_num;
    
        for (i = 0; i < add_num; i++) {
            cout<<"Enter Values: ";
            cin>>arr[i];
        
            sums += arr[i];
            avrg = sums / add_num;
        }
    }
    
    void sum() {
        cout<<"Addition of these numbers are: "<<sums<<endl;
    }
    
    void average() {
         cout<<"Average of these numbers are: "<<avrg<<endl;   
    }
};

int main() {
    Calculation c = Calculation();
    c.display();
    c.sum();
    c.average();
}