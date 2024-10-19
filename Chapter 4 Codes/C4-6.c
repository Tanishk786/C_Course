#include<stdio.h>
//Keep taking the input from the user until it enters a odd number
int main(){
    int n;
do
{
printf("Enter a value :");
scanf("%d", &n);
if(n%2!=0){
    break;

}
} while (1);

    return 0;
}