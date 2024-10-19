 #include<stdio.h>
 //program to count the numbers of odd digits in an array
 int count(int digits[], int n);
 int main (){
    int digits[] = {1,2,3,3,4,5,6,9};
   printf("%d",count(digits,8));
    
    return 0;
 }
 int count(int digits[],int n){
    int count = 0;
     for (int i=0;i<n;i++){
    if(digits[i]%2 !=0){
    count++;
    } 
    }  
    return count;
 }