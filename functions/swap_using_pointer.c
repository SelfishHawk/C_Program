#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    printf("Enter first integers: ");
    scanf("%d",&a);
    printf("Enter second integers: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping, first integer: %d\n",a);
    printf("After swapping, second integer: %d\n",b);
    return 0;
}