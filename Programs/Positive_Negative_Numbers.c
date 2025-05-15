#include<stdio.h>
#include<conio.h>

void main() {
    int num;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    if (num < 0) {
        printf("Number is Negative");
    } else {
        printf("Number is Positive");
    }
}

/*
O/P:-

Enter Number: -5
Number is Negative

Enter Number: 5
Number is Positive

*/
