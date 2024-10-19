#include<stdio.h>
int main(){
    int n;
    printf("Enter a value :");
    scanf("%d",&n);
    double fact=1;
    for (double i = 1; i<=n; i++)
    {
       fact = fact*i;
    }
    printf("Factorial : %lf", fact);
    
    return 0;
}