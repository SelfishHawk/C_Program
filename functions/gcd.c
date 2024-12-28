 #include<stdio.h>
 #include<math.h>
 int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
 }
  /* int gcd(int a,int b){
    int temp =1;
    if (a==0 || b==0){
        temp =0;
    }
    else{
        for (int i = 1;i <= a && i <= b;i++){
        if (a%i ==0 && b%i ==0){
            temp = i;
        }
        }
 } 
 return temp;
 } */
 int main(){
    int a,b;
    printf("Enter the value of first number:");
    scanf("%d",&a);
    printf("Enter the value of second number:");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The GCD of %d and %d is: %d",a,b,hcf);
    return 0;
 }