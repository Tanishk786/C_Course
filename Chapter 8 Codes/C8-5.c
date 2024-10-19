#include<stdio.h>
/*WAP to replace the data in a file of Q(a)
with the number of vowels in a string*/
int main (){
    FILE*qna;
 
    qna = fopen("qna.txt","w");
    char ans[50];
    printf("Enter Answer :");
    scanf("%s", ans);
    fprintf(qna,"%s", ans);
    fclose(qna);
        return 0;
}