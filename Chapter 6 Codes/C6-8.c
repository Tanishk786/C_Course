#include<stdio.h>
/* write a program to enter price of 3 items & print their
final cost with gst with an array */
int main (){
    
    float price[3];
    printf("Enter First product price : ");
    scanf("%f", &price[0]);
     printf("Enter Second product price : ");
    scanf("%f", &price[1]);
     printf("Enter Third product price : ");
    scanf("%f", &price[2]);

    printf("Final price for First product is :%f\n",
     price[0]+(0.18*price[0]));
       printf("Final price for Second product is :%f\n", 
    price[1]+(0.18*price[1]));
      printf("Final price for Third product is :%f\n",
     price[2]+(0.18*price[2]));
    return 0;
} 
