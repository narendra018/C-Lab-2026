#include<stdio.h>
int main(){
    int arr[100];
    int pos=0;
    int neg=0;
    int zero=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=0){
            pos++;
        }
        if(arr[i]<=0){
            neg++;
        }
        if(arr[i]==0){
            zero++;
        }

    }
    printf("no of positive no%d\n",pos);
    printf("no of negative no%d\n",neg);
    printf("no of zeroes%d\n",zero);
}