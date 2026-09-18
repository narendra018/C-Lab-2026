#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter any no:");
    scanf("%d", &n);
    int rem=0;
    for(int i=0;n!=0;i++){
        rem=rem*10+n%10;
        n=n/10;
}
printf("The reverse of no is %d",rem);
}