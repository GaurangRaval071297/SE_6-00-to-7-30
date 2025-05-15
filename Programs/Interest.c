#include<stdio.h>
#include<conio.h>

void main() {
    int pri = 25000, interestOfYears = 5;
    float rate = 8;
    
    float ans = pri * rate * interestOfYears;
    float ans2 = ans / 100;
    float totalamount = pri+ans2;

    printf("\n Your Intrest is %f",ans2);
    printf("\n You have to Pay total amount is : %f",totalamount);

}

/*
O/P:-

 Your Intrest is 10000.000000
 You have to Pay total amount is : 35000.000000
 
 */
 