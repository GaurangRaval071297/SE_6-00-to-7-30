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
    printf("Find Percentage");
    
    int sub1 = 50, sub2 = 65, sub3 = 85, sub4 = 45, sub5 = 60;
    float sum, percentage;
    
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / 500) * 100;
    printf("\n Total Subject Marks is %f", sum);
    printf("\n percentage is %f", percentage);
    
    return 0;
    getch();
}