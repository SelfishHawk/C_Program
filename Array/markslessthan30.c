#include<stdio.h>
int main(){
    int marks[10];
    printf("Enter the marks of the students:-");
    for(int i=0; i<10;i++){
    scanf("%d",&marks[i]);}
    for(int i=0;i<10;i++){
        if(marks[i]<30){
            printf("Marks-%d Index%d \n",marks[i],i);
        }
    }
}