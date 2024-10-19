#include<stdio.h>
// Program to print the elements
// in an array in reverse order
void reverse(int elements[], int n);
void printarray(int elements[], int n);
int main (){
    int elements[10] = {1,2,3,4,5,6,7,8,9,10};
     reverse(elements,10);
    printarray(elements,10);

    return 0;
}
void printarray(int elements[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n", elements[i]);
    }
    printf("\n");
}
void reverse(int elements[], int n){
    for ( int i = 0; i < n/2; i++)
    {
   int firstelem = elements[i];
   int secondelem = elements[n-i-1];
    elements[n-i-1] = firstelem;
    elements[i] = secondelem;
    }
}
