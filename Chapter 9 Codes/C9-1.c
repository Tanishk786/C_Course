#include<stdio.h>
#include<stdlib.h>
int main (){
    char*mptr;
mptr = (char*)malloc(1*sizeof(int));
mptr[0] = 'L';
mptr[1] = 'o';
mptr[2] = 'v';
mptr[3] = 'e';

for(int i=0;i<5; i++) {
    printf("%c\n", mptr[i]);
}

 int*cptr;
 cptr = (int*)calloc(5,sizeof(int));
 
 for(int j=0; j<5;j++){
   printf("%d\n", cptr[j]);
 }  
   return 0;
}