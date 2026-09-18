#include<stdio.h>
int main(){
    float principal, rate;
    printf("Enter the principal amount and rate");
    scanf("%f %f", &principal, &rate);
    int time;
    printf("Enter the time in years");
    scanf("%d", &time);
    float SI;
    SI=(principal*rate*time)/100;
    printf("The simple interest is:%f",SI);
}