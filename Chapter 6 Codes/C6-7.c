#include<stdio.h>
// program to swap two numbers using pointers
void _swap(int *a,int *b);
int main (){
    int a,b;
    printf("Enter a value :");
    scanf("%d", &a);
    printf("Enter another value :");
    scanf("%d", &b);
    printf("value of a is %d\n and value of b is %d\n", a,b);
    _swap(&a,&b);
    printf("value of a is %d\n and value of b is %d\n", a,b);
    return 0;
}
void _swap(int *a, int *b){
    int t = *a;
        *a = *b;
        *b = t;
}