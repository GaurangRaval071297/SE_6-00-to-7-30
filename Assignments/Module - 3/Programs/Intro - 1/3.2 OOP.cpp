/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.*/

#include<iostream>
using namespace std;

class Rectangle {
    public:
    int l, w, area;
    
    int display(int length, int width) {
        cout << length * width;
        return l*w;
    }
};

int main() {
    int length, width;
    
    cout<<"Enter Length: ";
    cin>>length;
    
    cout<<"Enter width: ";
    cin>>width;
    
    Rectangle r;
    r.display(length, width);
    return 0;
}