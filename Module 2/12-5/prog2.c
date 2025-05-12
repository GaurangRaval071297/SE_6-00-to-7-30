#include<stdio.h>
#include<conio.h>
void main() {
    int row, col, input;
    
    printf("Enter Number: ");
    scanf("%d",&input);
    
    for(row = 1; row <= input; row++) {
        for(col = 1; col <= row; col++) {
            printf("%d", col);
        }
        printf("\n");
    }
    getch();
}