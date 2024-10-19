#include<stdio.h>
#include<stdlib.h>
int main (){
     int*iptr;
     int n;
     printf("Enter a multiple of memory multiple of int size :");
     scanf("%d", &n);
     iptr = (int*)calloc(n,sizeof(int));
     for(int i=0; i<n; i++)
{
    printf("%d\n", iptr[i]);
}
  free(iptr);
    return 0;
}