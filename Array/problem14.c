#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter the value of array:-");
    for (int i=0;i<5;i++){
        scanf("%d\n",&arr[i]);
        if (i%2==0){
            arr[i]=arr[i]+10;
        }
        else{
            arr[i]*=2;
        }
    }
     for (int i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}
