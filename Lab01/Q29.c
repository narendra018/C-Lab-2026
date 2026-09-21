#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter any no:");
    scanf("%d", &n);
    int orig=n;
    int rem=0;
    while(n!=0){
        rem=rem*10+n%10;
        n=n/10;
}
if(rem==orig){
    printf("It is a palindrome number");
}
else{
    printf("not a palindrome number");
}
}
