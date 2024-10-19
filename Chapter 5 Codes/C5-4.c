#include<stdio.h>
//program to illustrate Recurssion
void printHW(int count);

int main(){
    int count;
    printf("Enter Repeatation :");
    scanf("%d", &count);
    printHW(count);

    return 0;
}
 void printHW(int count){
    if (count == 0){
        return;
    }
   
    printf("Hello World\n");
    printHW(count-1);
 }