#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
    char fName[100], pass[100], myEmail[100] = "a@gmail.com", myPassword[100] = "123456";
    int data,data2;
    printf("Enter User Name: ");
    scanf("%s", &fName);
    
    printf("Enter Passwor: ");
    scanf("%s", &pass);
    
    
    //printf("UserName is %s Passwrod is %s ", myEmail, myPassword);
    //     printf("data is %d",strcmp(ch,ch2));
    
    
    data = strlen(fName);
    data2 = strlen(pass);
    if(data!=0 && data2!=0)
    {
       if (strcmp(fName, myEmail) == 0 && (strcmp(pass, myPassword)) == 0) 
       {
         printf("Email & Password is valid");
        } 
        else  
        {
            printf("Incorrect");
        } 
    }
    else
    {
         printf("Please Enter UserName & Password");
    }
    


    getch();
}