#include<stdio.h>
int main(){
    int seconds=31558150;
    int remsec,days,hours,min; 
    printf("no of days:%d\n",seconds/86400);
    seconds=seconds%86400;
    printf("no of hours:%d\n",seconds/3600);
    seconds=seconds%3600;
    printf("no of min:%d\n",seconds/60);
    printf("no of rem sec left:%d\n",seconds%60);
}