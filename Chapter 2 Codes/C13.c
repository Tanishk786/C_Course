#include<stdio.h>
#include<math.h>
// To calculate Compound Intrest
int main(){
int A,n;
float r;
printf("Enter the Principal Amount :");
scanf("%d",&A);
printf("Enter the Rate:");
scanf("%f",&r);
printf("Enter the Time Period in years :");
scanf("%d",&n);
float CI=pow((1+r/100),n)*A;
printf("Compound Intrest according to given data is : %f", CI);
return 0;
}