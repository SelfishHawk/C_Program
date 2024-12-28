#include <stdio.h>
int fac(int a){
    int j = 1;
    for(int i=1; i<=a; i++){
    j=j*i;
    }
    return j;
}
// int fac_1(int n){
//     if(n == 0 ||n == 1){
//         return 1;
//     }
//     else{
//         return n*fac_1(n-1);
//     }

int pr(int n, int r){
    return fac(n)/(fac(r)*fac(n-r));
}
// int pr_1(int n, int r){
//     return fac_1(n)/(fac_1(r)*fac_1(n-r));
// }
int main(){
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    int value=pr(n,r);
    // int value_1 = pr_1(n,r);
    printf("The value of nCr is: %d\n",value);
    // printf("The value of nCr is: %d\n",value_1);
    return 0;
}