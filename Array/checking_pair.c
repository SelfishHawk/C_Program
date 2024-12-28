#include <stdio.h>
int main(){
    int count=0,a,x;
    printf("Enter the size of array:-");
    scanf("%d",&a);
    printf("Enter the value:-");
    scanf("%d",&x);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if (arr[i]+arr[j]==x){
                count++;
            }
        }
    }
    printf("Number of pairs %d",count);
    return 0;
}