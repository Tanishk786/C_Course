#include<stdio.h>
int main (){
    int age = 25;
    int *ptr = &age;
    int _age = *ptr;
    //print address
    printf("%p\n", &ptr);
    printf("%p\n", ptr);
    printf("%p\n", &age);
    // print value
    printf("%d\n", _age);
    printf("%d\n", *ptr);
    printf("%d\n", &age);
    return 0;
}