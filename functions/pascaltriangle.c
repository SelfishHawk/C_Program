#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    printf("Enter the number of line in pascal triangles: ");
    scanf("%d",&n);
    for (int l=0; l<n; l++)
    {
        for (int c=0; c<=n-l-1; c++){
            printf(" ");
        }
        int a=1;
        for (int k=0; k<=l; k++){
            int ncr=fact(l)/(fact(k)*fact(l-k));//pascal triangle is a form of ncr function
            printf("%d ",ncr);
        }
        printf("\n");
    
    }
    return 0;
}