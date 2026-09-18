#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    int sum1=0,sum2=0;
    for(int i=1,j=0;i<=n;i=i+2,j=j+2){
        sum1=sum1+i;
        sum2=sum2+j;
    }
    printf("Sum of odd no is%d\n",sum1);
    printf("Sum of even no is%d\n",sum2);

}