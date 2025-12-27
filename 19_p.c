//sum and averaeg of enter user num
#include<stdio.h>
void main()
{
    int n,i,sum=0,average;
    printf("Enter number you want :");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    average=sum/n;
    printf("sum = %d\naverage=%d",sum,average);
    
}
    