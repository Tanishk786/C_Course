#include<stdio.h>
// To print the smallest number
int main(){
 int x,y,z;
    printf("Enter the First Value :");
    scanf("%d", &x);
    printf("Enter the Second Value :");
    scanf("%d", &y);
    printf("Enter the Third Value :");
    scanf("%d", &z);
    if(x<y&&x<z){
        printf("%d is the smallest number",x);
    }else if(y<x&&y<z){
        printf("%d is the smallest number",y);
    }else{
        printf("%d is the smallest number",z);
    }

    return 0;
}