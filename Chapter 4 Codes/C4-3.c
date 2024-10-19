//using swich case statement Write aprogram to carry out various temperature conversions
#include<stdio.h>
int main(){
    int preference;
    float k,c,t,h,p,l;
    printf("Enter the preference (12,21,23,32,13,31) :");
    scanf("%d",&preference);
    switch (preference)
    /* celcius - 1
       kelvin - 2
       fahrenheit - 3*/
    {
    case 12 : 

printf("Enter the Value of Temerature in celcius : ");
scanf("%f", &c);

printf("Temperature in Degree kelvin : %f \n",c+273.15 );
break;
    case 21 : 

printf("Enter the Value of Temerature in kelvin : ");
scanf("%f", &t);

printf("Temperature in celcius : %f \n",t-273.15 );
break;

    case 13 : 

printf("Enter the Value of Temerature in celcius : ");
scanf("%f", &k);

printf("Temperature in Fahrenheit : %f \n", 9*k/5 + 32 );
     break;
     case 31 : 

printf("Enter the Value of Temerature in Fahrenheit : ");
scanf("%f", &h);

printf("Temperature in celcius : %f \n",(h-32)*5/9 );
     break;
     case 23 : 

printf("Enter the Value of Temerature in kelvin : ");
scanf("%f", &p);

printf("Temperature in Fahrenheit : %f \n",(p-273.15)*9/5 + 32 );
     break;
     case 32 : 

printf("Enter the Value of Temerature in Fahrenheit : ");
scanf("%f", &l);

printf("Temperature in kelvin : %f \n",(l-32)*5/9 + 273.15 );
     break;

    
    default: printf("Invalid");
        break;
    }
    return 0;
}
