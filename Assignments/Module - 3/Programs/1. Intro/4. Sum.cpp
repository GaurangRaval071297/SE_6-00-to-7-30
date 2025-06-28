/*Write a program that asks for two numbers and displays their sum. Ensure this is
done after setting up the IDE (like Dev C++ or CodeBlocks).*/

#include<iostream>
using namespace std;

class Rectangle {
    public:
    int num1, num2, ans;
    
    int display(int number1, int number2) {
        cout << number1 + number2;
        return number1 + number2;
    }
};

int main() {
    int n1, n2;
    
    cout<<"Enter Length: ";
    cin>>n1;
    
    cout<<"Enter width: ";
    cin>>n2;
    
    Rectangle r;
    r.display(n1, n2);
    return 0;
}