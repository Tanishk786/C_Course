#include<stdio.h>
#include<string.h>
/* program to convert all lower case vowels to upper case
And vice versa in a string */
int main (){
    char vowels[50];
    printf("Enter a string in lower case:");
    fgets(vowels,100,stdin);
    int slength = strlen(vowels);
   printf("Length of the string is : %d\n",slength); 
   for (int i = 0; i < slength ; i++){
    if(vowels[i]>='a' && vowels[i]<='z'){
        if(vowels[i] == 'a' || vowels[i]=='e' || vowels[i]=='i' 
        || vowels[i]=='o' || vowels[i]=='u')
        vowels[i] = vowels[i] - 32;
    }
   }
   printf("Upppercase letters are : %s\t", vowels);
    char vowel[50];
    printf("Enter a string in Upper case:");
    fgets(vowel,100,stdin);
    int length = strlen(vowels);
   printf("Length of the string is : %d\n",length); 
   for (int i = 0; i < length ; i++){
    if(vowel[i]>='A' && vowel[i]<='Z'){
        if(vowel[i] == 'A' || vowel[i]=='E' || vowel[i]=='I' 
        || vowel[i]=='O' || vowel[i]=='U')
        vowel[i] = vowel[i] + 32;
    } }  printf("Lowercase letters are : %s\t", vowel); return 0; } 
 