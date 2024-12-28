#include <stdio.h>
#include <math.h>
int fac(int n){
    if(n == 0 ||n == 1){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int main()
{
    int n,x,s=1;
    printf("Enter value of n");
    scanf("%d",&n);
    printf("Enter value of x");
    scanf("%d",&x);
    for(int i=1;i<=n;i++){
       s+=pow(x,i)/fac(i);
    }
    printf("\n %d",s);
    return 0;
}