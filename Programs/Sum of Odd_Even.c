#include<stdio.h>

void main() {
    int start, end;
    int sum_even = 0, count_odd = 0;

    // Input: Start and End numbers
    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            sum_even += i;
        } else {
            count_odd += i;
        }
    }

    printf("Total sum of even numbers: %d\n", sum_even);
    printf("Total number of odd numbers: %d\n", count_odd);
}

/*

O/P:
Enter the start number: 1
Enter the end number: 5
Total sum of even numbers: 6
Total number of odd numbers: 3

*/
