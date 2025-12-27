//sum of series
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum + i*i ;
     }
     printf("the sum of series is 1^2+2^2+3^2+.....+n^2 : %d",sum);
     return 0;
}