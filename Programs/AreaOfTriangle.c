#include <stdio.h>
#include<conio.h>

void main()
{
    printf("\n Area of Triangle");
    
    int side1, side2, side3;
    
    printf("Enter Side1 value: ");
    scanf("%d",&side1);
    
    printf("Enter Side2 value: ");
    scanf("%d",&side2);
    
    printf("Enter Side3 value: ");
    scanf("%d",&side3);
    
    int ans = (side1 + side2 + side3) / 2;
    printf("Area of Triangle is: %d", ans);
    
}

/*
O/P:-

 Area of TriangleEnter Side1 value: 10
Enter Side2 value: 25
Enter Side3 value: 20
Area of Triangle is: 27

*/
