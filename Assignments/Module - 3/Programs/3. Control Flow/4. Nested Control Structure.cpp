//Write a program that prints a right-angled triangle using stars (*) with a nested loop.
//Objective: Learn nested control structures.

#include<iostream>
using namespace std;

int main() {
    int i,j,k;
    
    for(i = 0; i <= 5; i++) {
        for(j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}