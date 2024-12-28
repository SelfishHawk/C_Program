#include <stdio.h>
int main(){
    int a,b;
    printf("Enter no. of rows:-");
    scanf("%d",&a);
    printf("Enter no. of column:-");
    scanf("%d",&b);
    int arr1[a][b];
    int arr2[a][b];
    printf("enter the value of matrix 1:-");
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the value of matrix 2:-");
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    // int arr[a][b];
    // for (int i=0;i<a;i++){
    //     for (int j=0;j<b;j++){
    //         arr[i][j]=arr1[i][j]+arr2[i][j];
    //     }
    // }
    printf("output \n");
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            arr2[i][j]+=arr1[i][j];
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}