/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.*/

#include<stdio.h>
#include<conio.h>

int main() {
    int l, w, area;
    
    printf("Enter Length: ");
    scanf("%d",&l);
    
    printf("Enter Length: ");
    scanf("%d",&w);
    
    area = l*w;
    printf("Area of Rectangle is: %d", area);
    
    
    return 0;
}