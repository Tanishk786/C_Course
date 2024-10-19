#include<stdio.h>
//program to illustrate functions
void printNamaste();
void printBonjour();
int main(){
      char a;
      printf("Enter i for indian and f for french :");
      scanf("%c",&a);
      if (a=='i')
      {
        printNamaste();
      }
      else if(a=='f'){
       printBonjour();
      }
      else
      {
        printf("Invalid");
      }
      
    return 0;
}
 void printNamaste(){
    printf("Namaste");
 }
 void printBonjour(){
    printf("Bonjour");
 }