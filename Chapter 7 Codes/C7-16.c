#include<stdio.h>
#include<string.h>
// A Structures to store vectors 
struct vector {
    int x;
    int y;
};
void sumv(struct vector a, struct vector b, struct vector c);
int main (){
    struct vector v1;
    printf("Enter the magnitude of vector in the direction of x :");
    scanf("%d", &v1.x);
    printf("Enter the magnitude of vector in the direction of y :");
    scanf("%d", &v1.y);
    
    struct vector v2;
    printf("Enter the magnitude of vector in the direction of x :");
    scanf("%d", &v2.x);
    printf("Enter the magnitude of vector in the direction of y :");
    scanf("%d", &v2.y);

    struct vector sum = {0};
    
        sumv(v1, v2, sum);
    

    return 0;
}
void sumv(struct vector a, struct vector b, struct vector c){
    c.x = a.x + b.x;
    c.y = a.y + b.y;
     printf("Sum of x component is : %d\n", c.x);
     printf("Sum of y component is : %d\n", c.y);
}
