#include<stdio.h>
// To check whether the value is even
int main(){
    int a;
    printf("Enter a Value :");
    scanf("%d", &a);
    printf("%d \n", a%2 == 0);
    return 0;
}