#include<stdio.h>
int fun(int a[]){
    a[0]=12;
}
int main(){
    int arr[5]={2,4,6,8,0};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}