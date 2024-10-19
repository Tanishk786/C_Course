#include<stdio.h>
#include<string.h>
// To print the string from the user using %C
int main (){
    char email[50];
    char ch;
    printf("Enter your email address :");
    for (char ch=0; ch!='\n';ch++)
    {
        scanf("%c", email[ch]);
    }
    puts(email);
    return 0;
}