 #include<stdio.h>
 //program to count the numbers of repeated digits in an array
 int count(int digits[], int n);
 int main (){
    int digits[] = {3,1,2,3,4,3,5,3};
   printf("%d",count(digits,8));
    
    return 0;
 }
 int count(int digits[],int n){
    int count = 0;
     for (int i=0;i<n;i++){
    if(digits[i] == 3){
    count++;
    } 
    }  
    return count;
 }