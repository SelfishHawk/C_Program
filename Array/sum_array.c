#include <stdio.h>
int main(){
    int a;
    printf("Enter size of array:-");
    scanf("%d",&a);
    int arr[a],sum=0;
    printf("Enter values of array");
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    printf("%d\n",arr[a-1]);
    printf("%d\n",arr[1]);
    return 0;
}