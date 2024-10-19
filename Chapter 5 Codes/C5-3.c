#include<stdio.h>
#include<math.h>
// Determining square of a number using library
int main(){
    float a;
    printf("Enter a Number :");
    scanf("%f",&a);
    printf("Square of the number is : %f", pow(a,2));
    return 0;
}