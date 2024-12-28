#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,0};
    arr[4]=10;  //changes 4th index to 10
    printf("%d\n",arr[4]);
    float a[3]={1.2,3.4,5.6};
    printf("%f\n",a[2]);
    char b[3]={'a','c','%'};
    printf("%c\n",b[1]);
    return 0;
}