#include <stdio.h>
int main(){
    int a,b,sum=0;
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
    int l1,r1,l2,r2;
    printf("Enter the value of l1&r1:-");
    scanf("%d%d",&l1,&r1);
    printf("Enter the value of l2&r2:-");
    scanf("%d%d",&l2,&r2);
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j];
        }
        printf("\n");
    }
    printf("Sum of elements between l1 and r1 is %d\n",sum);
    return 0;
}