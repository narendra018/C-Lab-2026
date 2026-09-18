#include<stdio.h>
int main(){
    int n,k;
    printf("Enter a number");
    scanf("%d", &n);
    int sum=0;
    for(int i=1;n!=0;i++){
        k=n%10;
        sum=sum+k;
        n=n/10;
    }
    printf("%d",sum);
}