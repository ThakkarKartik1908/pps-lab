// with arrgument and no return value
#include<stdio.h>
void add(int,int);
int main(){
    int n1,n2;
    printf("enter num1:");
    scanf("%d",&n1);
    printf("enter num2:");
    scanf("%d",&n2);
    add(n1,n2);
    return 0;
} 
void add(int n1,int n2){
    printf("sum=%d",n1+n2);
}