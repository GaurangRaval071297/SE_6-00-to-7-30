#include<stdio.h>
#include<conio.h>

void main() {
    int start, end, count_odd = 0, count_even = 0, i;
    
   printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);
    
    for(i = start; i <= end; i++) {
        if(i % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }
    
    printf("Number of even numbers: %d\n", count_even);
    printf("Number of odd numbers: %d\n", count_odd);
}

/*
O/P:

Enter the start number: 1
Enter the end number: 15
Number of even numbers: 7
Number of odd numbers: 8

*/

