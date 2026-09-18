#include<stdio.h>
int main(){
    int base;
    printf("Enter the base of triangle");
    scanf("%d", &base);
    int height;
    printf("Enter the height of triangle");
    scanf("%d", &height);
    float area;
    area=0.5*base*height;
    printf("The area of the triangle is %.2f",area);
}