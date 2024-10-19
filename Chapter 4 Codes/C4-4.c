#include<stdio.h>
//Print the sum of first n natural numbers
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
   int  sum=0;
    for(int i=0; i<=n; i++) {
    sum += i;
    }
    printf("Sum is : %d\n", sum);
    return 0;
}