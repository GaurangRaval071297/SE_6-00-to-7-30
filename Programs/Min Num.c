#include<stdio.h>
#include<conio.h>

void main() {
    int min, max;
    
    printf("Enter Max Numbers: ");
    scanf("%d", &max);
    
    printf("Enter Min Numbers: ");
    scanf("%d", &min);
    
    if(min < max) {
        printf("Minimum Number is %d", min);
    } else {
        printf("Invalid Input!");
    }
}

/*

O/P:

Enter Max Numbers: 54
Enter Min Numbers: 20
Minimum Number is 20

*/