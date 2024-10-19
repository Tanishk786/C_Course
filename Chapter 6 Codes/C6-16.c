#include<stdio.h>
//To enter the last value in an array
//void printarray(int array[], int n);
int main (){
  int array[50],i,n,elem;
  printf("Enter the length of an array :");
  scanf("%d", &n);
  for(int i=1; i<n ; i++){
    scanf("%d\t", &array[i]);
  }
   printf("Enter the last digit :");
   scanf("%d", &elem);
   array[i] = elem;
   printf("Final Array :");
       for(int i=0 ; i<n ; i++){
  printf("%d\n", array[i]);
}
  // printarray(array,n);
  return 0;
}
//void printarray(int array[], int n){


