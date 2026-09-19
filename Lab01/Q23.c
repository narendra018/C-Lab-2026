#include<stdio.h>
int main(){
    int n,exp;
    printf("Enter the number and exponent");
    scanf("%d %d", &n, &exp);
    float k=1;
    if(exp>0){
        for(int i=1;i<=exp;i++){
            k=k*n;
        }
    }
    else{
        for(int i=1;i<=-exp;i++){
            k=k*(1/(float)n);
        }
    }
    printf("req no is %.3f",k);
}