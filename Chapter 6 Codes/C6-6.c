#include<stdio.h>
/* program to print all letters
 in english alphabets in reverse order using pointers*/
 int main (){
    char i = 'a';
    char j = 'z';
    char *x = &i;
    char *y = &j;
    for ( char l = *y; l>=*x; l--)
    {
       printf("%c\n", l);
    }
    
    return 0;
 }