#include<stdio.h>
#include<conio.h>

void main() {
    int num = 1, i, j;
    
    //printf("Enter Num: ");
    //scanf("%d",&num);
    
    for(i = 1; i <= 5; i++) {
        for(j = 1; j<= i; j++) {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    
}

/*
O/P:

Enter Num: 4
1
23
456
78910
1112131415

*/
