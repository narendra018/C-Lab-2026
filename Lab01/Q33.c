#include<stdio.h>
int main(){
    int h;
    printf("How many numbers");
    scanf("%d", &h);
    int n;
    printf("No:");
    scanf("%d", &n);
    int max=n;
    int min=n;
    for(int i=2;i<=h;i++){
        printf("No:");
        scanf("%d", &n);
        if(n>max){
            max=n;
        }
        if(n<max){
            if(n<min){
                min=n;
            }

        }
    }
    printf("max:%d\n",max);
    printf("min:%d",min);
}