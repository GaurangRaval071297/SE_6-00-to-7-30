#include<stdio.h>
#include<conio.h>

void main() {
    int Gujarati, Hindi, English, Maths, Science;
    float sum, percentage;
    
    printf("Enter Gujarati Marks: ");
    scanf("%d", &Gujarati);
    
    printf("Enter Hindi Marks: ");
    scanf("%d", &Hindi);
    
    printf("Enter English Marks: ");
    scanf("%d", &English);
    
    printf("Enter Maths Marks: ");
    scanf("%d", &Maths);
    
    printf("Enter Science Marks: ");
    scanf("%d", &Science);
    
    sum = Gujarati + Hindi + English + Maths + Science;
    printf("Sum is: %f", sum);
    
    percentage = sum * 100 / 500;
    printf("\n Percentage is: %f", percentage);
    
}

/*
O/P:-

Enter Gujarati Marks: 54
Enter Hindi Marks: 87
Enter English Marks: 65
Enter Maths Marks: 97
Enter Science Marks: 67

Sum is: 370.000000
Percentage is: 74.000000

*/
