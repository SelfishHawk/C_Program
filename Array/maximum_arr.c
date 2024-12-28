#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    printf("Enter size of array:-");
    scanf("%d",&a);
    int arr[a];
    int max=INT_MIN;
    printf("Enter values of array");
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}