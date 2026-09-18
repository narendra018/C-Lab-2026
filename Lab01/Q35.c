#include<stdio.h>
int main(){
    int n;
    int k;
    int t=0;
    printf("Enter a number");
    scanf("%d", &n);
    for(int i=0;n!=0;i++){
        k=n%10;
        t=t+k;
        n=n/10;
    }
    printf("%d\n",t);
    if(t>9){
        int m;
        int sum=0;
        for(int i=1;t!=0;i++){
        m=t%10;
        sum=sum+m;
        t=t/10;
    }
    printf("%d",sum);}
    }
