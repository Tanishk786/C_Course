#include<stdio.h>
#include<math.h>
// To print the average of three numbers
int main(){
    int x,y,z;
    printf("Enter the First Value :");
    scanf("%d", &x);
    printf("Enter the Second Value :");
    scanf("%d", &y);
    printf("Enter the Third Value :");
    scanf("%d", &z);
    printf("Average of all the numbers is : %d \n", (x+y+z)/3);
    return 0;
}