#include<stdio.h>
// To print value of different location of an array
void printarr(char arr[], int n);
int main(){
    char arr[]={'T','A','N','I','S','H','K'};
    printarr(arr,7);
    
    return 0;
}
void printarr(char arr[], int n){
    for(int i=0;i<n; i++){
        printf("Values of an arrray is : %c\n", arr[i]);
    }
}