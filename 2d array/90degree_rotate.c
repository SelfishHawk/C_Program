#include <stdio.h>
int main(){
    int a;
    printf("Enter no. of rows and column:-");
    scanf("%d",&a);
    int arr[a][a];
    printf("enter the value");
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("output \n");
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int brr[a][a];
    printf("90 degree rotation:- \n");
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            brr[i][j]=arr[a-j-1][i]; 
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}