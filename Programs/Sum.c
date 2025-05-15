#include <stdio.h>
#include<conio.h>
void main()
{
    
    int num1 = 15, num2 = 20, sum = 0;
    float modul;
    
    sum = num1 + num2;
    printf("\n Addition is %d", sum);
    
    sum = num1 - num2;
    printf("\n Substraction is %d", sum);
    
    sum = num1 * num2;
    printf("\n Multiplication is %d", sum);
    
    sum = num1 / num2;
    printf("\n Division is %d", sum);
    
    sum = num1 % num2;
    printf("\n Modul is %d", sum);
    
    getch();
}

/*
O/P:-

 Addition is 35
 Substraction is -5
 Multiplication is 300
 Division is 0
 Modul is 15
 
 */
 