#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first integers: ");
    scanf("%d",&a);
    printf("Enter second integers: ");
    scanf("%d",&b);
    //Method to swap two integers without third integer
     a=a+b;
    b=a-b;
    a=a-b; 
    printf("After swapping, first integer: %d\n",a);
    printf("After swapping, second integer: %d\n",b);
    return 0;
}