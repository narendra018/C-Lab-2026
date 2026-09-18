#include<stdio.h>
int main(){
    int n;
    printf("Enter any number");
    scanf("%d", &n);
    for(int i=0;i<=n;i=i+2){
        printf("%d\t",i);
    }
}