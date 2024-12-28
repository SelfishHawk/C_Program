#include<stdio.h>
int min(int a, int b) {
    return (a<b)?a:b;
}
int max(int a, int b) {
    return (a>b)?a:b;
}
int main(){
    printf("enter two numbers");
    int a,b;
    int gcd=1;
    scanf("%d %d",&a,&b);
    int m=min(a,b);
    int n=max(a,b);
    for(int i=1;i<=m;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("the greatest common divisor is %d",gcd);
    return 0;
}