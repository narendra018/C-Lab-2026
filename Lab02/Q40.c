#include<stdio.h>
int main(){
    int n=0;
    int sum=0;
    while(n>=0){
    sum=sum+n;
    printf("Enter a number");
    scanf("%d", &n);
}
printf("sum of the nos is:%d",sum);
}