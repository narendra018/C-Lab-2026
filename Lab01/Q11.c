#include<stdio.h>
int main(){
int sec;
printf("Enter no of seconds");
scanf("%d", &sec);
printf("hrs:%d",sec/3600);
sec=sec%3600;
printf("min:%d",sec/60);
printf("sec:%d",sec%60);

}
