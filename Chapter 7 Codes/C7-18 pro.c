#include<stdio.h>
#include<string.h>
typedef struct Students {
    char name[15];
    int Er;
    char branch[30];
    char con[12];
    int sem;

}sty;
typedef struct Teachers {
  char code[5];
  char name[15];
  char sub[30];
  char exp[10];
}tea;

int main (){
  int subcode;
  // Teacher's Zone
  tea t1[5];
  strcpy(t1[0].code,"SG");
  strcpy(t1[0].name,"Shweta Gupta");
  strcpy(t1[0].sub,"Discrete Structures");
  strcpy(t1[0].exp,"12 Years");

    strcpy(t1[1].code,"AS");
  strcpy(t1[1].name,"Abhilash Sharma");
  strcpy(t1[1].sub,"Networking");
  strcpy(t1[1].exp,"10 Years");

    strcpy(t1[2].code,"SV");
  strcpy(t1[2].name,"Sakshi Vora");
  strcpy(t1[2].sub,"Data Base Management System");
  strcpy(t1[2].exp,"15 Years");

    strcpy(t1[3].code,"NV");
  strcpy(t1[3].name,"Nishant Vora");
  strcpy(t1[3].sub,"Algorithms");
  strcpy(t1[3].exp,"15 Years");

   strcpy(t1[4].code,"RB");
  strcpy(t1[4].name,"Rahul Bhargav");
  strcpy(t1[4].sub,"Data Structures");
  strcpy(t1[4].exp,"12 Years");

   strcpy(t1[5].code,"GP");
  strcpy(t1[5].name,"Gajendra Purohit");
  strcpy(t1[5].sub,"Operating System");
  strcpy(t1[5].exp,"18 Years");

// Student's zone

  sty s1[9];
    strcpy(s1[0].name,"Tanishk Sarathe");
  s1[0].Er = 131;
  strcpy(s1[0].branch,"Computer Science");
  strcpy(s1[0].con,"7868769*87");
  s1[0].sem = 3;

    strcpy(s1[1].name,"Rishi Singh Vedi");
  s1[1].Er = 125;
  strcpy(s1[1].branch,"Master of Bussiness Administration");
  strcpy(s1[1].con,"7868765857*");
  s1[0].sem = 2;

    strcpy(s1[2].name,"Raman Kumar Bhalla");
  s1[2].Er = 150;
  strcpy(s1[2].branch,"Master of Bussiness Administration");
  strcpy(s1[2].con,"786876984*");
  s1[2].sem = 2;

   strcpy(s1[3].name,"Jassi Gill");
  s1[3].Er = 031;
  strcpy(s1[3].branch,"B.Pharmacy");
  strcpy(s1[3].con,"908776987*");
  s1[3].sem = 4;

   strcpy(s1[4].name,"Harshad Chopra");
  s1[4].Er = 051;
  strcpy(s1[4].branch,"Data Science");
  strcpy(s1[4].con,"786870007*");
  s1[4].sem = 2;  

   strcpy(s1[5].name,"Aditya Hooda");
  s1[5].Er = 140;
  strcpy(s1[5].branch,"LAW");
  strcpy(s1[5].con,"786833987*");
  s1[5].sem = 2;

   strcpy(s1[6].name,"Jiya Shankar");
  s1[6].Er = 191;
  strcpy(s1[6].branch,"Digital Marketing");
  strcpy(s1[6].con,"786876112*");
  s1[6].sem = 1;

   strcpy(s1[7].name,"Vamika Kohli");
  s1[7].Er = 195;
  strcpy(s1[7].branch,"Artificial Intelligence");
  strcpy(s1[7].con,"987654391*");
  s1[7].sem = 5;

   strcpy(s1[8].name,"Samayra Malhotra");
  s1[8].Er = 171;
  strcpy(s1[8].branch,"Cyber Security");
  strcpy(s1[8].con,"786872348*");
  s1[8].sem = 8;

   strcpy(s1[9].name,"Tripti Sharma");
  s1[9].Er = 130;
  strcpy(s1[9].branch,"Bachelor of Bussiness Administration");
  strcpy(s1[9].con,"982436871*");
  s1[9].sem = 2;
  // To print     

  printf("Enter the Teacher's subcode/Student's Enrollment Digits :");
  scanf("%d", &subcode);

  switch(subcode)
  {
              // faculty details printing
  case 301 :   printf("Faculty code is :%s\n", t1[0].code);
               printf("Name of the Faculty is :%s\n", t1[0].name);
               printf("Subject He/She Teaches :%s\n", t1[0].sub);
               printf("Experience :%s\n",t1[0].exp);
                      break;
  case 302 :   printf("Faculty code is :%s\n", t1[1].code);
               printf("Name of the Faculty is :%s\n", t1[1].name);
               printf("Subject He/She Teaches :%s\n", t1[1].sub);
               printf("Experience :%s\n",t1[1].exp);
                      break;
  case 303 :   printf("Faculty code is :%s\n", t1[2].code);
               printf("Name of the Faculty is :%s\n", t1[2].name);
               printf("Subject He/She Teaches :%s\n", t1[2].sub);
               printf("Experience :%s\n",t1[2].exp);
                      break;
  case 304 :   printf("Faculty code is :%s\n", t1[3].code);
               printf("Name of the Faculty is :%s\n", t1[3].name);
               printf("Subject He/She Teaches :%s\n", t1[3].sub);
               printf("Experience :%s\n",t1[3].exp);
                      break;
  case 305 :   printf("Faculty code is :%s\n", t1[4].code);
               printf("Name of the Faculty is :%s\n", t1[4].name);
               printf("Subject He/She Teaches :%s\n", t1[4].sub);
               printf("Experience :%s\n",t1[4].exp);
                      break;               
  case 306 :   printf("Faculty code is :%s\n", t1[5].code);
               printf("Name of the Faculty is :%s\n", t1[5].name);
               printf("Subject He/She Teaches :%s\n", t1[5].sub);
               printf("Experience :%s\n",t1[5].exp);
                      break;
          // Student details printing                 
  case 131 :   printf("Name of the student is :%s\n", s1[0].name);
               printf("Enrollement Digit of the student is :%d\n", s1[0].Er);
               printf("Branch of the student is : %s\n", s1[0].branch);
               printf("Contack no. of the student is :%s\n", s1[0].con); 
               printf("Semester of the student is : %d", s1[0].sem); 
                      break;
  case 125 :   printf("Name of the student is :%s\n", s1[1].name);
               printf("Enrollement Digit of the student is :%d\n", s1[1].Er);
               printf("Branch of the student is : %s\n", s1[1].branch);
               printf("Contack no. of the student is :%s\n", s1[1].con); 
               printf("Year of the student is : %d", s1[1].sem); 
                      break;  
  case 150 :   printf("Name of the student is :%s\n", s1[2].name);
               printf("Enrollement Digit of the student is :%d\n", s1[2].Er);
               printf("Branch of the student is : %s\n", s1[2].branch);
               printf("Contack no. of the student is :%s\n", s1[2].con); 
               printf("Year of the student is : %d", s1[2].sem);
                      break; 
  case 031 :   printf("Name of the student is :%s\n", s1[3].name);
               printf("Enrollement Digit of the student is :%d\n", s1[3].Er);
               printf("Branch of the student is : %s\n", s1[3].branch);
               printf("Contack no. of the student is :%s\n", s1[3].con); 
               printf("Semester of the student is : %d", s1[3].sem); 
                      break;
  case 051 :   printf("Name of the student is :%s\n", s1[4].name);
               printf("Enrollement Digit of the student is :%d\n", s1[4].Er);
               printf("Branch of the student is : %s\n", s1[4].branch);
               printf("Contack no. of the student is :%s\n", s1[4].con); 
               printf("Semester of the student is : %d", s1[4].sem); 
                      break;
  case 140 :   printf("Name of the student is :%s\n", s1[5].name);
               printf("Enrollement Digit of the student is :%d\n", s1[5].Er);
               printf("Branch of the student is : %s\n", s1[5].branch);
               printf("Contack no. of the student is :%s\n", s1[5].con); 
               printf("Year of the student is : %d", s1[5].sem); 
                      break;
  case 191 :   printf("Name of the student is :%s\n", s1[6].name);
               printf("Enrollement Digit of the student is :%d\n", s1[6].Er);
               printf("Branch of the student is : %s\n", s1[6].branch);
               printf("Contack no. of the student is :%s\n", s1[6].con); 
               printf("Semester of the student is : %d", s1[6].sem); 
                      break;
  case 195 :   printf("Name of the student is :%s\n", s1[7].name);
               printf("Enrollement Digit of the student is :%d\n", s1[7].Er);
               printf("Branch of the student is : %s\n", s1[7].branch);
               printf("Contack no. of the student is :%s\n", s1[7].con); 
               printf("Semester of the student is : %d", s1[7].sem);
                      break; 
  case 171 :   printf("Name of the student is :%s\n", s1[8].name);
               printf("Enrollement Digit of the student is :%d\n", s1[8].Er);
               printf("Branch of the student is : %s\n", s1[8].branch);
               printf("Contack no. of the student is :%s\n", s1[8].con); 
               printf("Semester of the student is : %d", s1[8].sem);
                      break;    
  case 130 :   printf("Name of the student is :%s\n", s1[9].name);
               printf("Enrollement Digit of the student is :%d\n", s1[9].Er);
               printf("Branch of the student is : %s\n", s1[9].branch);
               printf("Contack no. of the student is :%s\n", s1[9].con); 
               printf("Year of the student is : %d", s1[9].sem);
                      break;                
  default :    printf("NO SUCH TEACHER/STUDENT FOUND WITH ENTERED FACULTY/ENROLLMENT CODE");
                      break;
  }
  return 0;
}