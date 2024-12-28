#include<stdio.h>
int main(){
    int a = 5;
    int* x=&a; //int* stores the address
     // printf("a = %d\n", a); //prints value of a variable
    // printf("%p",&a); //prints value of address of a variable
    printf("%p\n",x); //prints address of a variable
    printf("%p\n",&x); //prints address of address of a variable
    printf("%d\n",*x); //prints value at the address stored in x (which is a)
    *x=6; //value at the address stored in x is changed
    printf("%d\n",*x); 
    return 0;
}