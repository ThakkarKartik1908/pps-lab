//fibonacci series
#include<stdio.h>
void main()
{
    int f=0,s=1,t,n,i;
    printf("enter number for print fibonacci series upto:");
    scanf("%d",&n);
    printf("%d,%d",f,s);
    for(i=2;i<=n;i++){
        t=f+s;
        printf(",%d",t);
        f=s;
        s=t;
    }
}