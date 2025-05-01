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
    printf("Check Number is Positive or Negative");
    
    int num = 20;
    
    if (num <= 0) {
        printf("\n Number is Negative");
    } else {
        printf("\n Number is Positive");
    }
    
    return 0;
    getch();
}