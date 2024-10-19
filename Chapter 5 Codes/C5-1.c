#include<stdio.h>
// Calculate price after add GST into it
void finalprice(float value);

int main(){
      float value;
      printf("Enter Original Price :");
      scanf("%f", &value);
      printf("Original Price is : %f\n", value);
     finalprice(value);
    return 0;
}
 void finalprice(float value){
    value = value + (value * 0.18);
    printf("Final Price is : %f", value);
 }
