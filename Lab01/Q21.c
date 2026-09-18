#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b");
    scanf("%d %d", &a, &b);
    printf("+,-,/,*\n");
    int ch;
    printf("Enter ur choice");
    scanf(" %c", &ch);
    switch(ch){
        case '+':
        printf("%d",a+b);
        break;
        case '*':
        printf("%f",(float)a*b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        printf("%f",(float)a/b);
        break;
    }

return 0;
}