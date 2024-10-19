#include<stdio.h>
#include<string.h>
// Program to form a struct to store complex numbers

struct complex {
    int r;
    int i;
};
int main (){
    char i='i';
    struct complex c1 = {3,5};
    struct complex *ptr = &c1;
    //print in pointer format  
    printf("Real part is : %d\n", ptr->r);
    printf("Imaginary part is : %d\n", ptr->i);

    return 0;
}