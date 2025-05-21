#include <stdio.h>
#include<conio.h>

int main() {
    char ch;

    // Ask the user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase Letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase Letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    }
    else {
        printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
}

/*
O/p:

Enter a character: a
'a' is a Lowercase Letter.

Enter a character: A
'A' is a Uppercase Letter.

Enter a character: 7
'7' is a Special character.

*/