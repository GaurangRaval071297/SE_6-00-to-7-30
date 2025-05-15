#include<stdio.h>
#include<conio.h>

void main() {
    int num, row, col;
    
    printf("Enter Num: ");
    scanf("%d",&num);
    
    for(row = 1; row <= num; row++) {
        for(col = 1; col<= row; col++) {
            printf("*");
        }
        printf("\n");
    }
    
     for(row = num; row >=1; row--) {
        for(col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
}

/*
O/P:

Enter Num: 4
*
**
***
****
****
***
**
*

*/
