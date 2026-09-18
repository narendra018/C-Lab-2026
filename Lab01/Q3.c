#include<stdio.h>
int main(){
    int basic,hra,ma,bonus;
    printf("Enter the basic salary");
    scanf("%d", &basic);
    printf("Enter the hra");
    scanf("%d", &hra);
    printf("Enter the ma");
    scanf("%d", &ma);
    printf("Enter the bonus");
    scanf("%d", &bonus);
    int gross;
    gross=basic+hra+ma+bonus;
    printf("Your gross salary is%d",gross);

}