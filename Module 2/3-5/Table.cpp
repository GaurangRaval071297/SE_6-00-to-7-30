#include<stdio.h>
#include<conio.h>

int main() {
    int num, i, result;
    printf("Enter Number:- ");
    scanf("%d", &num);
    
    for(i = 1; i <= 10; i++) {
        result = num * i;
        printf("%d * %d = %d \n",num, i, result);
    }
    return 0;
}