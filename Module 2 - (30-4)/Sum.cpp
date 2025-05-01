/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
int main()
{
    printf("Sum Program");
    
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
    printf("\n Modul is %f", sum);
    
    return 0;
    getch();
}