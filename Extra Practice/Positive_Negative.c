#include<stdio.h>
#include<conio.h>

void main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("Number is Positive");
    } else if (num == 0) {
        printf("Number is Zero");
    } else {
        printf("Number is Negative");
    }
    
}

/*
O/P:

Enter Number: 54
Number is Positive

Enter Number: 0
Number is Zero

Enter Number: -54
Number is Negative

*/