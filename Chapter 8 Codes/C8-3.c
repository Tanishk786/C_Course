#include<stdio.h>
/*WAP to write all the odd numbers 
from 1 to n in a file*/
int main (){
    FILE*odd;
    odd = fopen("odd.txt","w");

    int n;
    printf("Enter n =");
    scanf("%d",&n);
    for (int i=1; i<=n ; i++){
        if(i%2!=0){
            fprintf(odd,"%d", i);
        }
    }
    fclose(odd);
    return 0;
}