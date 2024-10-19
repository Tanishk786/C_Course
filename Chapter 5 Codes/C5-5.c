#include<stdio.h>
//program to illustrate Recurssion in Sums
int sum(int n);

int main(){
    int n;
    printf("Enter Range :");
    scanf("%d", &n);
printf("Sum of n terms is : %d", sum(n) );

    return 0;
}
 int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    printf("Sum of n terms is : %d", sumN);
        return 0;
    }