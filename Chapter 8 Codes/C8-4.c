#include<stdio.h>
/*WAP to replace already written numbers in
 a file with their sum*/
 int main (){
    int a,b;
    FILE*add;

    add = fopen("add.txt","r");
    
    fscanf(add,"%d", &a);
    fscanf(add,"%d", &b);
    fclose(add);
    add = fopen("add.txt","w");
    int c=a+b;
    fprintf(add,"%d", c);
    fclose(add);
        return 0;
 }