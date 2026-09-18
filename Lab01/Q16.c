#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter a,b and c");
    scanf("%d %d %d", &a ,&b, &c);
    max=a;
    if(b>c){
        max=b;
    }
    else{
        max=c;
    }
printf("max is%d",max);

}