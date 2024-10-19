#include<stdio.h>
#include<string.h>
/* Write the function to count the vowels
 in a given string*/
 int count(char array[]);
 int main (){
     char word[50];
     printf("Enter a word :");
     scanf("%s", word);
     printf("No. of vowels in a given word is :%d\n", count(word));

    return 0;
 }
 int count(char array[]){
     int count = 0;
    for (int k=0; array[k]!='\0'; k++)
    {
     if( array[k]=='a' || array[k]=='e' || array[k]=='o' || array[k]=='i' ||
      array[k]=='u' || array[k]=='A' || array[k]=='E' || array[k]=='I' ||
       array[k]=='O' ||array[k]=='U')
     {
      count++;
     }
    }
    return count;
 }