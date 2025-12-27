// find occurrence of given number
#include<stdio.h>
void main(){
    int n,i,count=0,num;
    printf("enter how many number you want:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%d",&a[i]);
    }

    printf("enter number which you find occurrence :");
    scanf("%d",&num);
     for(i=0;i<n;i++){
        if(num==a[i]){
            count++;
        }
     }
     printf("tne occurrence of %d is =%d",num,count);
}