#include<stdio.h>
#include<conio.h>

void main() {
    int num1, num2, num3;
    
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    
    printf("Enter Number 3: ");
    scanf("%d", &num3);
    
    if (num1 <= num2 && num1 <= num3) {
        printf("The minimum is: %d\n", num1);
    } else if (num2 <= num3 && num2 <= num1) {
        printf("The minimum is: %d\n", num2);
    } else {
        printf("The minimum is: %d\n", num3);
    }
}

/*
O/P:

Enter Number 1: 45
Enter Number 2: 54
Enter Number 3: 98
The minimum is: 45

*/