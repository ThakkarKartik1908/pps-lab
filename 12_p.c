//find first and last number also sum
#include<stdio.h>
void main()
{
    int n,last,first,sum ;
    printf("enter number:");
    scanf("%d",&n);
    last=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    first=n;
    printf("first number=%d\nlast number=%d",first,last);
    printf("\nsum of first and last digit is=%d",first+last);
}