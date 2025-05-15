#include<stdio.h>
#include<conio.h>

void main() {
    int num, row, col;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    for(row = 1; row <= num; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d",row);
        }
        printf("\n");
    }
}

/*
O/P:

Enter Number: 5
1
22
333
4444
55555

*/