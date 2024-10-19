#include<stdio.h>
// Pointer in function call
void square(int a);
void _square(int*a);
int main (){
    int a;
    // call by value
     printf("Enter the value :");
    scanf("%d", &a);
    square(a);
    printf("Number is : %d\n", a);
    // call by reference
    _square(&a);
    printf("Number is : %d\n", a);
    return 0;
}
void square(int a){
    a = a*a; 
    printf("product of a number : %d\n", a);
}
void _square(int*a){
    *a = (*a) * (*a); 
    printf("product of a number : %d\n", *a);
}