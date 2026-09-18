#include<stdio.h>
int main(){
    int mat,sci,eng,hin,sst;
    printf("Enter the marks of maths");
    scanf("%d", &mat);
    printf("Enter the marks of science");
    scanf("%d", &sci);
    printf("Enter the marks of english");
    scanf("%d", &eng);
    printf("Enter the marks of hindi");
    scanf("%d", &hin);
    printf("Enter the marks of sst");
    scanf("%d", &sst);
    int total;
    total=(mat+sci+eng+hin+sst);
    printf("The total of the student is:%d\n",total);
    int per;
    per=(total*100)/500;
    printf("Percentage scored is%d",per);
    return 0;
}