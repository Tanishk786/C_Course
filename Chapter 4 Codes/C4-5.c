#include<stdio.h>
//Print the table of a number entered by user
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    for(int i=1; i<=10; i++) {
    printf(" %d\n", n*i);
    }
    return 0;
}