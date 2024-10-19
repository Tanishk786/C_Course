#include<stdio.h>
// Read first five numbers from a file
int main (){
    FILE *fptr;
    fptr = fopen("file1.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
      printf("%d",n);
    fscanf(fptr,"%d", &n);
      printf("%d",n);
   fscanf(fptr,"%d", &n);
      printf("%d",n);
    fscanf(fptr,"%d", &n);
      printf("%d",n);
    fscanf(fptr,"%d", &n);
      printf("%d",n);
    fscanf(fptr,"%d", &n);

    return 0;
}