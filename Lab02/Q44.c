#include<stdio.h>
int main(){
    int cons,exc;
    float charge;
    printf("Enter the consumption ");
    scanf("%d", &cons);
    if(cons<200){
        charge=0.50*cons;
    }
    else if(cons>=210 && cons<=400){
        exc=cons-200;
        charge=100+exc*0.65;
    }
    else if(cons>=401 && cons<=600){
        exc=cons-400;
        charge=230+exc*0.80;
    }
    else{
        exc=cons-600;
        charge=425+exc*1.25;
    }
    printf("The amount paid by the consumer is %f",charge);
}