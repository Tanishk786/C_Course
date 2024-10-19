/*Program to store the data of three students
 in a structure*/
 #include<stdio.h>
 #include<string.h>
 typedef struct student {
    char name[50];
    int roll;
    float cgpa;
 }st ;
 int main (){
    st s1;
        strcpy(s1.name, "Tanishk");
        s1.roll = 191;
        s1.cgpa = 9.25;
    printf("Name of the student is : %s\n", s1.name);
    printf("Roll no. of student is : %d\n", s1.roll);
    printf("CGPA of the student is : %f\n", s1.cgpa);
   printf("\n");
   st s2;
       strcpy(s2.name,"Rhea");
       s2.roll = 123;
       s2.cgpa = 8.99;
    printf("Name of the student is : %s\n", s2.name);
    printf("Roll No. of the student is : %d\n", s2.roll);
    printf("CGPA of the student is : %f\n", s2.cgpa);
   printf("\n");
   st s3;
       strcpy(s3.name,"Babbar");
       s3.roll = 100;
       s3.cgpa = 9.65;
    printf("Name of the student is : %s\n", s3.name);
    printf("Roll No. of the student is : %d\n", s3.roll);
    printf("CGPA of the student is : %f\n", s3.cgpa);
    return 0;

 }