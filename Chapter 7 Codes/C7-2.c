#include<stdio.h>
#include<string.h>
/* To ask user to enter their first name and
 printback their name to them*/
 int main (){
    char firstname[100];
    // for first name
        printf("Enter your first name:");
        scanf("%s", firstname);
        printf("Your First name is %s\n", firstname);

        return 0;
 }

