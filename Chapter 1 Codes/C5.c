#include<stdio.h>
// Temperature Conversion Kelvin to Degree Celcius 
int main (){
    float k;
    printf("Enter the Value of Temerature in Kelvin : ");
    scanf("%f", &k);
    
    printf("Temperature in Degree Celcius : %f \n",k-273.15 );
    return 0;
}