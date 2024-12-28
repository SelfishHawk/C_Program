// No extra variables to be used
#include <stdio.h>
int main(){
    int a;
    printf("Enter no. of rows and columns:-");
    scanf("%d",&a);
    int arr[a][a];
    printf("enter the value");
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered matrix is:-\n");
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
   /* printf("Transposed matrix is:-\n");
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }*/
//    Other method is swapping the arr[i][j] by arr[j][i]
    for (int i=0; i<a; i++) {
        for (int j=i+1; j<a; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("Transposed matrix is:-\n");
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}