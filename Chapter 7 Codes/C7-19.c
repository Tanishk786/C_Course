#include<stdio.h>
#include<string.h>
/* Program to store details of 
bank account of acustomer in a structure and make alias for it */
typedef struct AccountInfo {
    char name[20];
    int Ac;
    int pan;
}AcN;
int main (){
    AcN a1; //alias
    strcpy(a1.name,"Raman");
    a1.Ac = 1534101024;
    a1.pan = 32431652;
    
    printf("Name of the Account Holder :%s\n", a1.name);
    printf("Account Number of the Account Holder : %d\n", a1.Ac);
    printf("Pan Card no. of account Holder : %d", a1.pan);
  return 0;
}
