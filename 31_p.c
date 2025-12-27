//factorial by recursion
#include<stdio.h>
int fact(int);
int main(){
    int s,n;
    printf("enter number:");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial of %d is =%d",n,s);
}

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}