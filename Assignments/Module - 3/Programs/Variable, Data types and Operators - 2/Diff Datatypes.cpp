//Write a C++ program that demonstrates the use of variables and constants. Create
//variables of different data types and perform operations on them.
//Objective: Understand the difference between variables and constants

#include<iostream>
using namespace std;

class Stud_Details {
    public:
    string stud_name;
    int stud_age;
    
    void display() {
        cout <<"Enter Name: ";
        cin>>stud_name;
        
        cout<<"Enter age: ";
        cin>>stud_age;
        
        cout<<"Your Name is: "<<stud_name<<endl;
        cout<<"Your Age is: "<<stud_age<<endl;
    }
};

int main() {
    Stud_Details sd = Stud_Details();
    sd.display();
    return 0;
}