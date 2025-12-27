//check thr given number is prime or not
#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("number is prime or not?");
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not prime number",n);
    }
}