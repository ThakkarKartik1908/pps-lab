// using function calculate sum
#include<stdio.h>
// with arrgument and with return value
int add(int,int);

int main(){
    int num1,num2,c;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    c=add(num1,num2);
    printf("sum=%d",c);
}
int add(int x,int y)// value are copy here so we use x=num1 and y=num2
{   
    return x+y;
}
