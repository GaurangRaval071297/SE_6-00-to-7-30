//Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.
//Objective: Practice conditionalstatements(if-else).
#include<iostream>
using namespace std;

class Grade {
public:
    int stud_marks;
    
    void details() {
        cout<<"Enter Your Marks: ";
        cin>>stud_marks;
        
        if(stud_marks > 70) {
            cout<<"A Grade";
        } else if (stud_marks > 60) {
            cout<<"B Grade";
        } else if(stud_marks > 50) {
            cout<<"C Grade";
        } else if(stud_marks > 35) {
            cout<<"D Grade";
        } else {
            cout<<"Fail";
        }
    }

    
};

int main() {
    Grade g = Grade();
    g.details();
    return 0;
}