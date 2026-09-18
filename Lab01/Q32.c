#include<stdio.h>
int main(){
    int h;
    printf("How many numbers");
    scanf("%d", &h);
    int n;
    int max=0;
    int secmax=0;
    for(int i=1;i<=h;i++){
        printf("No:");
        scanf("%d", &n);
        if(n>max){
            secmax=max;
            max=n;
        }
        if(n>secmax && n!=max){
            secmax=n;
            }
    }
    printf("max:%d\n",max);
    printf("second max:%d",secmax);
}