#include<stdio.h>
int main(){
    int hrs,min,sec;
    printf("Enter hrs");
    scanf("%d", &hrs);
    printf("Enter min");
    scanf("%d", &min);
    printf("Enter sec");
    scanf("%d", &sec);
    printf("Time:%dhrs%dmin%d\nsec",hrs,min,sec);
    printf("Total seconds:%d",hrs*60*60+min*60+sec);
    return 0;
}