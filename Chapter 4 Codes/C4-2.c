#include<stdio.h>
//Print the number from 0 to n
int main(){
    int n;
    printf("ENTER THE VALUE :");
    scanf("%d", &n);
    for(int i=0; i<=n; i++) {
    printf("%d\n", i);
    }
    return 0;
}