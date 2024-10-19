#include<stdio.h>
// A 2D array to store 3 subject marks of two students
int main (){
    int marks[2][3] = {{90,85,89},{90,65,99}};
     for(int i=0,j=0 ; i<3,j<3 ; i++, j++){
        printf("Marks for %d subject of First Student: %d\n",(i+1),
         marks[0][i]);
        printf("Marks for %d subject of Second Student: %d\n",(j+1),
         marks[1][j]);
     }
  return 0;
}