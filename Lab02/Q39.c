#include<stdio.h>
int fac(int n);
int main(){
    int n;
    printf("Enter any no:");
    scanf("%d", &n);
    float sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(float)i/fac(i);
    }
    printf("%f",sum);
}
int fac(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    return k;
}