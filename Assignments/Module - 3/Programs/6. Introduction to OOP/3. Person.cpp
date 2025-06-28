// Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
// Objective: Learn the concept of inheritance.

#include<iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;
};

class Teacher: public Person {
    public:
    int salary;
    string subject;
    
    void display() {
        cout<<"Enter your name: ";
        cin>>name;
        
        cout<<"Enter your subject: ";
        cin>>subject;
        
        cout<<"Enter your salary: ";
        cin>>salary;
        
        cout<<"Teacher name is: "<<name<<endl;
        cout<<"Subject is: "<<subject<<endl;
        cout<<"salary is: "<<salary<<endl;
    }
    
};

class Student: public Person {
      public:
      int enrollment;
      string stream;
    
    void display() {
        cout<<"Enter your name: ";
        cin>>name;
        
        cout<<"Enter your enrollment: ";
        cin>>enrollment;
        
        cout<<"Student name is: "<<name<<endl;
        cout<<"Enrollment is: "<<enrollment<<endl;
    }
    
    
};

int main()
{
    Teacher t = Teacher();
    t.display();
    
    Student s = Student();
    s.display();
    
    return 0;
}

