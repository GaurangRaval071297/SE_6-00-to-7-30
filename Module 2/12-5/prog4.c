#include<stdio.h>
#include<conio.h>
void main() {
    int row, col, input, space;
    
    printf("Enter Number: ");
    scanf("%d",&input);
    
    for(row = 1; row <= input; row++) {
        for(space = 0; space <= (input - row); space++) {
            printf(" ");
        }
        for(col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
    getch();
}