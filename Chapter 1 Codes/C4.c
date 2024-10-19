#include<stdio.h>
// Calculating Simple Intrest
int main (){
float p,r,t;
  printf("Enter the Value of Principle : ");
  scanf("%f", &p);
   printf("Enter the Value of Rate : ");
   scanf("%f", &r);
    printf("Enter the duration of time in Months : ");
    scanf("%f", &t);
     printf("Simple Intrest is : %f", (p*r*t/12) / 100 );

    return 0;
}