#include<stdio.h>
//program to check if the number is a natural number or not
int main(){
    int t;
    printf("ENTER NUMBER :");
    scanf("%d" ,&t);
    if (t<=0)
    {
     printf("NOT A NATURAL NUMBER");
    } 
    else{
        printf(" NATURAL NUMBER");
    }
     return 0;
}