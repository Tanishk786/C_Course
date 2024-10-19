#include<stdio.h>
// A 2D array to store table of 2 and 3
void printtable1(int table[][10],int n,int m, int number);

int main (){
    int table[2][10];

    printtable1(table,0,10,2);
    printtable1(table,1,10,3);
  return 0;
}
void printtable1(int table[][10],int n,int m, int number){
      for(int i=0; i<m ; i++){
      table[n][i] = number * (i+1);
       printf("%d * %d = %d\n",number, i+1, table[n][i]);
      }
      
}
