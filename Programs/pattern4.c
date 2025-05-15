#include<stdio.h>
#include<conio.h>

void main() {
    int num, row, col, space;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    for(row = 1; row <= num; row++) {
        for(space = 0; space <= (num - row); space++) {
            printf(" ");
        }
        for (col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
}

/*
O/P:

Enter Number: 5
     *
    **
   ***
  ****
 *****

*/