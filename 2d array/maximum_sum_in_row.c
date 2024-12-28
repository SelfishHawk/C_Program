#include <stdio.h>

#include <limits.h>
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
    int sum=0,max=INT_MIN,row=0;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            sum+=arr[i][j];
            if(sum>max){
                max=sum;
                row=i+1;
            }
        }
        sum=0;
    }
    printf("Maximum sum in a row is:- %d and row number is:-%d\n",max,row);
    return 0;
}