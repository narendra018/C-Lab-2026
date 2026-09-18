#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b");
    scanf("%d %d", &a, &b);
    printf("1.Addition\n");
    printf("2.Multiplication\n");
    printf("3.Subtracion\n");
    printf("4.Division\n");
    int ch;
    printf("Enter ur choice");
    scanf("%d", &ch);
    switch(ch){
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%f",(float)a*b);
        break;
        case 3:
        printf("%d",a-b);
        break;
        case 4:
        printf("%f",(float)a/b);
        break;
    }

return 0;
}