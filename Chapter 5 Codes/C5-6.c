#include<stdio.h>
// Function to print temperature as hot or cold on the basis of value entered by user
void hot(); 
void cold();
void norm();
int main (){
    double f;
    printf("Enter Temperature in Degree Celcius:");
    scanf("%lf", &f);
    if (f>31){
    hot();
     printf("Temperature is %lf", f);
    }
    else if(f<31 && f>0){
        norm();
        printf("Temperature is %lf", f);
    }
    else{
        cold();
         printf("Temperature is %lf", f);
    }
    return 0;
}
void hot(){
    printf("Hot\n");
}
void cold(){
    printf("Cold\n");
}
void norm(){
    printf("Normal\n");
}