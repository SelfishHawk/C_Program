#include <stdio.h>
int main(){
    int a,b;
    printf("Enter no. of rows:-");
    scanf("%d",&a);
    printf("Enter no. of column:-");
    scanf("%d",&b);
    int arr[a][b],transpose[b][a];
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
    printf("Transpose \n");
    for (int i=0;i<b;i++){
        for (int j=0;j<a;j++){
            transpose[i][j] = arr[j][i];
        }
    }
     for (int i=0;i<b;i++){
        for (int j=0;j<a;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}