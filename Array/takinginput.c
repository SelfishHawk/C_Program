#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the first element:");
    scanf("%d\n",&arr[0]);
    printf("Enter the second element:");
    scanf("%d\n",&arr[1]);
    printf("Enter the third element:");
    scanf("%d\n",&arr[2]);
    printf("Enter the fourth element:");
    scanf("%d\n",&arr[3]);
    printf("Enter the fifth element:");
    scanf("%d\n",&arr[4]);
    for(int i=0;i<=4;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}