#include<stdio.h>
// program to find maximum number from
// given two numbers using pointers
int main(){
    int a,b;
   
    printf("Enter a value :");
    scanf("%d", &a);
    printf("Enter second value :");
    scanf("%d", &b);

     int *i = &a;
    int *j = &b;

    if(*i > *j){
        printf("%d is greater value\n", a);
    }
    else{
        printf("%d is greater value\n", b);
    }
    return 0;
}