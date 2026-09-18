#include<stdio.h>
int main(){
    int n,next;
    printf("Enter no to which fibonacci to be printed");
    scanf("%d", &n);
    int a=0;
    int b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=3;i<=n;i++){
        next=a+b;
        a=b;
        b=next;
        printf("%d\n",next);
    }
}