/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,space,num;
    
    printf("Enter Your Rows:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(space=0;space<=(num-i);space++)
        {
          printf(" ");  
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    

    return 0;
}