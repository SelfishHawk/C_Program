#include <stdio.h>
#include <limits.h>
int main(){
    int a,b,max=INT_MIN,min=INT_MAX;
    printf("Enter no. of rows:-");
    scanf("%d",&a);
    printf("Enter no. of column:-");
    scanf("%d",&b);
    int arr[a][b];
    int idx1,idx2,ind3,ind4;
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
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if (arr[i][j]>max){
                max=arr[i][j];
                idx1=i;
                idx2=j;
            } 
            
            if (arr[i][j]<=min){
                min=arr[i][j];
                 ind3=i;
                 ind4=j;
            }
        }
    }
printf("Maximum value is %d and its index is(%d,%d) \n",max,idx1,idx2);
printf("Minimum value is %d and its index is(%d,%d) \n",min,ind3,ind4);
return 0;
}