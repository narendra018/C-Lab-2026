#include<stdio.h>
#include<math.h>
int main(){
    int x,n;
    printf("Enter x and n");
    scanf("%d %d", &x, &n);
    int y;
    if(n==1){
        printf("Y:%d",1+x);
    }
    else if(n==2){
        printf("Y:%f",1+(float)x/n);
    }
    else if(n==3){
        printf("Y:%d",1+pow(x,n));
    }
    else if(n>3 || n<1){
        printf("Y:%d",1+n*x);
    }
}