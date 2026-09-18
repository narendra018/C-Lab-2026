#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter numbers");
    scanf("%d %d %d", &a, &b, &c);
    a>b>c && a>c>b?printf("A is max"):b>c && b>a?printf("Bis max"):printf("C is max");

}