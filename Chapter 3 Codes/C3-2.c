//write a program to find if a character is a upper case or not
#include<stdio.h>
int main (){
    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);
    if (ch>= 'a' && ch <= 'z')
    {
     printf("LOWER CASE");
    } 
    else if (ch>='A' && ch<='Z') {
        printf("UPPER CASE");
    }
    else {
        printf("NOT AN ENGLISH ALPHABET");
    }
    
    return 0;
}