
//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting

#include<iostream>
using namespace std;

int main() {
    string name;
    int age;
    
    cout<<"Enter your Name: ";
    cin>>name;
    
    cout<<"Enter your Age: ";
    cin>>age;
    
    cout<<"Hello Good Morning "<<name<<endl;
    cout<<age<<endl;
    
    return 0;
}