#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character");
    scanf("%c", &ch);
    ch>='A' && ch<='Z'?printf("Capital"):printf("small");

}