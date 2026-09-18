#include<stdio.h>
int main(){
    int M,P,C,E,H;
    printf("Enter the marks of maths");
    scanf("%d", &M);
    printf("Enter the marks of physics");
    scanf("%d", &P);
    printf("Enter the marks of chemistry");
    scanf("%d", &C);
    printf("Enter the marks of eng");
    scanf("%d", &E);
    printf("Enter the marks of hin");
    scanf("%d", &H);
    int total;
    total=M+P+C+E+H;
    float per;
    per=(float)total/5;
    printf("you scored %f\n",per);
    if(per>90){
        printf("A");
    }
    else if(per>80){
        printf("B");
    }
    else if(per>70){
        printf("C");
    }
    else if(per>50){
        printf("D");
    }
}