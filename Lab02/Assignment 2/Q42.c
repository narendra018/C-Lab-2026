#include<stdio.h>
int main(){
    for(int i=1;i<=7;i=i+2){
        for(int j=1;j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    for(int i=5;i>0;i=i-2){
        for(int j=1;j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
}