#include <stdio.h>
int main(){
    int a;
    printf("Enter no. of students:-");
    scanf("%d",&a);
    int arr[a][3];
    printf("enter the value");
    for (int i=0;i<a;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("output \n");
    for (int i=0;i<a;i++){
        printf("student %d:-",i);
        for (int j=0;j<3;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}