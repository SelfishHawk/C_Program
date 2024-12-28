#include<stdio.h>
int main(){
    int a;
    printf("Enter size of array:-");
    scanf("%d",&a);
    int arr[a],product=1;
    printf("Enter values of array");
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        product=product*arr[i];
    }
    printf("%d\n",product);
    return 0;
}