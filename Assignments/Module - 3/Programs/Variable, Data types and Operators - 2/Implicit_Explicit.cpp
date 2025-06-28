//Write a C++ program that performs both implicit and explicit type conversions and
//prints the results.
//Objective: Practice type casting in C++

#include<iostream>
using namespace std;

int main() {
    int i = 10;
    char c = 'A';
    
    float num1 = 10.10;
    int num2 = num1;
    cout<<num2<<endl;
    
    cout<<(int)c<<endl;
    
    int sum = i + c;
    cout<<sum;
    
    return 0;
}