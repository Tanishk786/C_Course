/* Make a program to input student's information
from a user & enter it to a file*/
#include<stdio.h>
int main(){
    FILE*sdata;
    sdata=fopen("file2.txt","w");
    char name[50];
    int age;
    float cgp;
    printf("Enter name :");
    scanf("%s", name);
    printf("Enter age :");
    scanf("%d", &age);
    printf("Enter cgpa :");
    scanf("%f\n", &cgp);

    fprintf(sdata,"%s\n",name);
    fprintf(sdata,"%d\n",age);
    fprintf(sdata,"%f",cgp);
    fclose(sdata);
    return 0;
}