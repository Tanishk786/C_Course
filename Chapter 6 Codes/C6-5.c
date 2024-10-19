#include<stdio.h>
/* program to print all letters
 in english alphabets  using pointers*/
 int main (){
    char i = 'a';
    char j = 'z';
    char *x = &i;
    char *y = &j;
    for ( char l = *x; l<=*y; l++)
    {
       printf("%c\n", l);
    }
    
    return 0;
 }