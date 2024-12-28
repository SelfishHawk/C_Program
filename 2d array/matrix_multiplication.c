#include <stdio.h>
int main(){
    int a,b;
    printf("Enter no. of rows of matrix 1:-");
    scanf("%d",&a);
    printf("Enter no. of column of matrix 1:-");
    scanf("%d",&b);
    int arr[a][b];
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int m,n;
    printf("Enter no. of rows of matrix 2:-");
    scanf("%d",&m);
    printf("Enter no. of column of matrix 2:-");
    scanf("%d",&n);
    int brr[m][n];
    printf("enter the value\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(b==m){
    int crr[a][n];
    for(int i=0;i<a;i++){
        for(int j=0; j<n; j++){
            int a=0;
            for(int k=0; k<b; k++){
                a+=arr[i][k]*brr[k][j];
                if(k==n-1){
                  crr[i][j]=a;
                  printf("%d ",crr[i][j]);
                }
            }
        }
        printf("\n");
    }
    }
    else{
        printf("Matrix multiplication is not possible\n");
        return 0;
    }
    return 0;
}