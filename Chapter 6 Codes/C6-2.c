#include<stdio.h>
//illustrate pointers
// print the value of i from its pointer to pointer
int main(){
    int i;
    printf("Enter the value :");
    scanf("%d", &i);
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
    return 0;
}