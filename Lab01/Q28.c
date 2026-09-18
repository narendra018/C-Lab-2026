#include<stdio.h>
#include<math.h>
int expon(int a, int c);
int main(){
    int n;
    printf("Enter any no:");
    scanf("%d", &n);
    int orig=n;
    int temp=n;
    int count=0;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    printf("no of digits is:%d\n",count);
    int sum=0;
    int remainder;
    while(n!=0){
        remainder=n%10;
        sum=sum+expon(remainder,count);
        n=n/10;    
    }
    if(orig==sum){
        printf("\nThe number is armstrong");}
        else{
            printf("no");
        }
return 0;
}
int expon(int x, int y){
    int k=1;
    for(int i=1; i<=y; i++){
        k=k * x;
    }
    return k;
}