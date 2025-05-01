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
    printf("Simple Interst");
    
    int p = 25000, years = 3;
    float r = 8.5;
    
    float ans = p * r  * years;
    float ans2 = ans / 100;
    float total =   ans2 + p;
    
    printf("\n Total Amount is: %f", total);
    printf("\n Interest is %f", ans2);
    
    return 0;
    getch();
}