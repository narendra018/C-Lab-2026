#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a,b and c");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b>c && a>c>b){
        printf("a is max");
    }
    else if(b>c>a && b>a>c){
        printf("b is max");
    }
    else{
        printf("c is max");
    }
}