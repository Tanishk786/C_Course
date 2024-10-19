#include<stdio.h>
// To check if given character is digit or not
int main(){
    char ch;
    printf("Enter the Character :");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9'){
        printf("The given character is a digit");
    }else{
        printf("The given character is not a digit");
    }

    return 0;
}