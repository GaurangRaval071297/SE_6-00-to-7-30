//Write a C++ program to display the multiplication table of a given number using a for
//loop.
//Objective: Practice using loops

#include<iostream>
using namespace std;

class Table {
public:
    int num, ans;
    
    void table() {
       cout<<"Enter Any Number to see multiplication table: ";
       cin>>num;
       
       for (int i = 1; i <= 10; i++) {
           ans = num * i;
           cout<<num << " X " << i << " = " <<ans<<endl;;
       }
        
    }

    
};

int main() {
    Table t = Table();
    t.table();
    return 0;
}