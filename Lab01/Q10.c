#include<stdio.h>
int main(){
    float M,P,C,E;
    printf("Enter the marks of maths");
    scanf("%f", &M);
    printf("Enter the marks of physics");
    scanf("%f", &P);
    printf("Enter the marks of chemistry");
    scanf("%f", &C);
    printf("Enter the marks of ent");
    scanf("%f", &E);
    float CM;
    CM=M/2+P/2+C/2+E;
    printf("The cutoff is:%f",CM);
    return 0;
}