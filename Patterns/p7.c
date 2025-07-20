#include<stdio.h>
#include<conio.h>

void main() {
    int i,j,k;
    
    for(i = 1; i <= 5; i++) {
        for(k = 1; k <= 5 - i; k++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

/*
O/P:

    1
   12
  123
 1234
12345

*/
