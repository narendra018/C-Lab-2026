#include<stdio.h>
int main(){
    int n;
    printf("Enter any no:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i*i);
    }
}