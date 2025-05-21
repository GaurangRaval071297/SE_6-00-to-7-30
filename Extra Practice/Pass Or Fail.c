#include<stdio.h>
#include<conio.h>

void main() {
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);
    
    if (marks < 35) {
        printf("Fail");
    } else {
        printf("Pass");
    }
    
}

/*
O/P:

Enter Marks: 56
Pass

Enter Marks: 33
Fail

*/