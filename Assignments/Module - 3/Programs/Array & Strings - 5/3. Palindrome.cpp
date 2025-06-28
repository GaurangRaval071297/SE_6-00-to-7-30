// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
// Objective: Practice string operations.

#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char str1[100], revStr[100];
    int i, len = 0;
    
    cout<<"Enter any String: ";
    cin>>str1;
    
    while (str1[len] != '\0') {
        len++;
    }
    for(i = 0; i < len; i++) {
        revStr[i] = str1[len - 1 - i];
    }
    
    revStr[len] = '\0';
     if(strcmp(str1, revStr) == 0) {
            cout<<"The given string is Palindrome!!";
        } else {
            cout<<"The given string is not Palindrome!!";
    }
    
    return 0;
}