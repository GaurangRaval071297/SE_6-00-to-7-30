#include<stdio.h>
#include<conio.h>

void main() {
    int num, square_num, square_ans, cube_num, cube_ans;
    printf("Choose 1 for Square & Choose 2 for Cube ");
    scanf("%d",&num);
    
    switch(num) {
        case 1:
        printf("Enter number for Square: ");
        scanf("%d", &square_num);
        
        square_ans = square_num * square_num;
        printf("\n Square is: %d", square_ans);
        break;
        
        case 2:
        printf("Enter number for Cube: ");
        scanf("%d", &cube_num);
        
        cube_ans = cube_num * cube_num * cube_num;
        printf("\n Cube is: %d", cube_ans);
        break;
        
        default:
        printf("Invalid");
        break;
        
    }
}

/*
O/P:-

square:
Choose 1 for Square & Choose 2 for Cube 1
Enter number for Square: 5

Square is: 25

cube:
Choose 1 for Square & Choose 2 for Cube 2
Enter number for Cube: 8

Cube is: 512
 
 */
 