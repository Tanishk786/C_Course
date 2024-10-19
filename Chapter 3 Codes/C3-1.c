#include<stdio.h>
// To check whether a student is passed or failed
int main(){
    float a;
    printf("Enter the value of a :");
    scanf("%f", &a);
    if (a>30){ 
        printf("PASSED");
    }
    else if (a==30){
        printf("PASSED WITH GRACE");
        printf("\n Accept your result and try to do better next time...");
    }
    else {
        printf("FAILED");
        printf("\n Accept your result and try to do better next time...");
    }
    
    return 0;
}