#include<stdio.h>
int main(){
    int sales;
    printf("Enter the value of sales");
    scanf("%d", &sales);
    float commission;
    int diff;
    if(sales<=500){
        commission=0.05*sales;
    }
    else if(sales>500 && sales<=2000){
        diff=sales-500;
        commission=35+0.1*diff;
    }
    else if(sales>2000 && sales<=5000){
        diff=sales-2000;
        commission=185+0.12*diff;
    }
    else {
        commission=0.125*sales;
    }
    printf("The commission for sales is Rs%.2f",commission);
}