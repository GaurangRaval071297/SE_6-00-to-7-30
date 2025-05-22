#include <stdio.h>

int main() {
    int start, end;
    int positive_sum = 0;
    int negative_count = 0;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++) {
        if (num > 0) {
            positive_sum += num;
        } else if (num < 0) {
            negative_count += num;
        }
    }

    printf("Total sum of positive numbers: %d\n", positive_sum);
    printf("Total number of negative numbers: %d\n", negative_count);

    return 0;
}

/*

O/P:

Enter the start of the range: -10
Enter the end of the range: 15
Total sum of positive numbers: 120
Total number of negative numbers: -55

*/

