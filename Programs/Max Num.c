#include<stdio.h>
#include<conio.h>

void main() {
    int min, max;
    
    printf("Enter Max Numbers: ");
    scanf("%d", &max);
    
    printf("Enter Min Numbers: ");
    scanf("%d", &min);
    
    if(max > min) {
        printf("Maximum Number is %d", max);
    } else {
        printf("Invalid Input!");
    }
}

/*

O/P:

Enter Max Numbers: 54
Enter Min Numbers: 10
Maximum Number is 54

*/