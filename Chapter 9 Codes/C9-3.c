#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*rptr;
    rptr = (int*)calloc(5,sizeof(int));
    printf("Enter values :");
    for(int i=0; i<5 ;i++)
    {
        scanf("%d\n", &rptr[i]);
    }
    for(int j=0; j<5;j++){
        printf("Values are : %d", rptr[j]);
    }
    realloc(rptr,8);
    printf("Now you can add eight values :");
     for(int l=0; l<8 ;l++)
    {
        scanf("%d\n", &rptr[l]);
    }
    for(int k=0; k<8;k++){
        printf("Values are : %d", rptr[k]);
    }
    return 0;
    }