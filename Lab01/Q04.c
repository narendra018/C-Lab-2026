#include<stdio.h>
int main(){
    float Fahrenheit;
    printf("Enter the temp in fahrenheit");
    scanf("%f", &Fahrenheit);
    float celsius;
    celsius=(Fahrenheit-32)*((float)5/9);
    printf("Temp in celsius:%.2f",celsius);
    return 0;
}