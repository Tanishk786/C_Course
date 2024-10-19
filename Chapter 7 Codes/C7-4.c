#include<stdio.h>
#include<string.h>
int stringlength(char array[]);
/* Program the inputs the user name and prints the length
 of string */
 int main (){
    char username[100];
    printf("Enter a word :");
    scanf("%s", username);
    printf("%d\n",stringlength(username));
    printf("%d", strlen(username));
    return 0;

 }
 int stringlength(char array[]){
    int count = 0;
    for(int i=0 ; array[i]!='\0'; i++)
    {
     count++;
    }
    return count;
 }