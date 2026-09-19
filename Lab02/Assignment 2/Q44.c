#include<stdio.h>
int main(){
    int arr[100];
    int odd=0;
    int even=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){
            odd++;    
        }
        else {
            even++;
        }
        }
        printf("The no of odd numbers are%d\n",odd);
        printf("The no of even numbers are%d",even);
}