#include<stdio.h>
#include<string.h>
/* Program to print highest frequency
 character in a string */

 int main (){
    char string[50];
    printf("Enter a string :");
    fgets(string,50,stdin);
    puts(string);
     int n = strlen(string);
   printf("Length of the string is : %d\n",n-1);
   char max='A'; 
   for(int i=0; i<n; i++){
    if(string[i]>='A' && string[i]<='z'){
        if(string[i]>max){
            max = string[i];
        }
    }
   }
   printf("Highest Frequency Character is : %c", max);
    return 0;
 }
