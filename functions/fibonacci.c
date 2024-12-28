#include<stdio.h>
int main(){
    int a,b=1;
    printf("Enter the n value:-");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d",b);
        b+=b;
    }
}