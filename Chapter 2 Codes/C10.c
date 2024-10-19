#include<stdio.h>
#include<math.h>
// To print True or False About Statement whether the value is greater than 9 and smaller than 100
int main(){
    int x;
    printf("Enter the First Value :");
    scanf("%d", &x);
    printf("%d \n",  x>9 && x<100);
    return 0;
}