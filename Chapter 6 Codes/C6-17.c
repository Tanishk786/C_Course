#include<stdio.h>
// Program to print largest value among array
int maxval(int array[],int n);
int main (){
    int array[50],n;
    printf("Enter the length of an array : ");
    scanf("%d", &n);
    for (int i=1 ; i<n ; i++){
        scanf("%d\n", &array[i]);
    }
      printf("The maximum value of an array is : %d",maxval(array, n));
    return 0;
}
int maxval(int array[],int n){
    int max =0;
    for(int i=1 ; i<n ; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
      return max;
}