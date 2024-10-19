#include<stdio.h>
#include<string.h>
/*Program to enter address of six people */
struct Address {
    int Houseno;
    char block;
    char Area[50];
};
int main (){
struct Address a1[100];
   a1[0].Houseno = 820;
   a1[0].block = 'A';
   strcpy(a1[0].Area,"New Navin Nagar Near PVR Cinema");
printf("House No of First Person is : %d\n", a1[0].Houseno);
printf("Block of that person is : %c\n", a1[0].block);
printf("Area of that person is : %s\n", a1[0].Area);
printf("\n");
   a1[1].Houseno = 78;
   a1[1].block = 'B';
   strcpy(a1[1].Area,"74 Bungalow Malviya Nagar");
printf("House No of Second Person is : %d\n", a1[1].Houseno);
printf("Block of that person is : %c\n", a1[1].block);
printf("Area of that person is : %s\n", a1[1].Area);
printf("\n");
   a1[2].Houseno = 210;
   a1[2].block = 'C';
   strcpy(a1[2].Area,"Near Railway Station Ayodhya");
printf("House No of Third Person is : %d\n", a1[2].Houseno);
printf("Block of that person is : %c\n", a1[2].block);
printf("Area of that person is : %s\n", a1[2].Area);
printf("\n");  
   a1[3].Houseno = 785;
   a1[3].block = 'A';
   strcpy(a1[3].Area,"Behind Aura Mall Hoshangabad Road");
printf("House No of Fourth Person is : %d\n", a1[3].Houseno);
printf("Block of that person is : %c\n", a1[3].block);
printf("Area of that person is : %s\n", a1[3].Area);
printf("\n");  
   a1[4].Houseno = 18;
   a1[4].block = 'D';
   strcpy(a1[4].Area,"Niketan Apartments, Near Main Market");
printf("House No of Fifth Person is : %d\n", a1[4].Houseno);
printf("Block of that person is : %c\n", a1[4].block);
printf("Area of that person is : %s\n", a1[4].Area);
printf("\n");
   a1[5].Houseno = 562;
   a1[5].block = 'A';
   strcpy(a1[5].Area,"2, Chandrashekhar Street ");
printf("House No of Sixth Person is : %d\n", a1[5].Houseno);
printf("Block of that person is : %c\n", a1[5].block);
printf("Area of that person is : %s\n", a1[5].Area);
printf("\n");

   return 0;
}
