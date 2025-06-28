// Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.
// Objective: Understand while loops and conditional logic

#include<iostream>
using namespace std;

class Num_Game {
public:
    int number, num2 = 50, i = 1;
    
    void details() {
        while (i <= 10)  {
            cout<<"Enter Any Number: ";
            cin>>number;
        
            if (number > num2) {
                cout<<"To High!"<<endl;
            } else if (number < num2) {
                cout<<"To Low!"<<endl;
            } else {
                cout<<"You gueess correct number!!!";
                break;
            }
            i++;
        }
        
    }

    
};

int main() {
    Num_Game g = Num_Game();
    g.details();
    return 0;
}