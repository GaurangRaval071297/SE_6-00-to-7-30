#include<stdio.h>
#include<conio.h>

int main() {
    
    char ch;
    
    printf("Enter Any Value: ");
    scanf("%c", &ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowels");
    } else {
        printf("Consonant");
    }
    return 0;
}

/*

O/P:

Enter Any Value: a
Vowels

Enter Any Value: A
Consonant

*/
