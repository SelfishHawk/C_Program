#include <stdio.h>
int main(){
    int a,b;
    printf("Enter no. of rows:-");
    scanf("%d",&a);
    printf("Enter no. of column:-");
    scanf("%d",&b);
    int arr[a][b];
    printf("enter the value");
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("output \n");
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}