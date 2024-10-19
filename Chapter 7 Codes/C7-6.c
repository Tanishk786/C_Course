#include<stdio.h>
#include<string.h>
/* To find the salted form of a password entered by 
user if the salt is something added at the end */
int main (){
    char password[50];
   // char newpass[100];
    char salt[] = "@123";
    printf("Enter your password :");
    scanf("%s", password);
 // to concatenate(MERGE) second string with first string
    strcat(password,salt);
    puts(password);
    return 0;
}