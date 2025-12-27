//occurrence also replace the number
#include<stdio.h>
void main(){
    int n,i,num,count=0,r;
    printf("enter how many number yoy want:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%d",&a[i]);
    }

    printf("enter the number for find occurrence :");
    scanf("%d",&num);
    printf("enter number which you want to replace:");
    scanf("%d",&r);
    
    for(i=0;i<n;i++){
        if(num==a[i]){
            count++;
            a[i]=r;
        }
    }
    printf("the occurrance of %d is=%d",num,count);
    for(i=0;i<n;i++){
        printf("\nnumber %d = %d",i+1,a[i]);
    }
}