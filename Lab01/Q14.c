#include<stdio.h>
int main(){
    char ch;
    printf("Enter any charcter:");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("Capital letter");
    }
    else if(ch>='a' && ch<='z'){
        printf("small");
    }
    else if(ch>='1' && ch<='9'){
        printf("number");
    }
    else{
        printf("Symbol");
    }
}