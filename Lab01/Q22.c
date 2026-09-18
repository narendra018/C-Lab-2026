#include<stdio.h>
int main(){
    int n;
    printf("Enter any no");
    scanf("%d", &n);
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    printf("The factorial of no is %d",k);
}