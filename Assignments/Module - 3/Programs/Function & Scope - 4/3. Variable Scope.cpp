//Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
// Objective: Reinforce the concept of variable scope.

#include<iostream>
using namespace std;


float val = 0.5;

int main() {
    int l = 5,w = 4,ans;
    ans = val * l * w;
    
    cout<<ans;
    
    return 0;
}