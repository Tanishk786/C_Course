#include<stdio.h>
#include<string.h>
void printstring(char array[]);
/* To create a string to store value of firstname and
 last name of user and print their value using aloop */
 int main (){
      char firstname[] = "TANISHK";
      char lastname[] = "SARATHE";
        printstring(firstname);
        printstring(lastname);
    return 0;
 }
 void printstring(char array[]){
    for (int i=0; array[i] != '\0' ; i++)
    {
        printf(" %c ", array[i]);
    }
    printf("\n");
 }