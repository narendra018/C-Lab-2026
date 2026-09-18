#include<stdio.h>
int main(){
    int n,exp;
    printf("Enter the number and exponent");
    scanf("%d %d", &n, &exp);
    int k=1;
    for(int i=1;i<=exp;i++){
        k=k*n;
    }
    printf("req no is %d",k);
}