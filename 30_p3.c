// no arrgument with return value
#include<stdio.h>
int add();
int main(){
    printf("sum=%d",add()); // r=add(); and print r
}
int add(){
    int n1,n2;
    printf("enter num1:");
    scanf("%d",&n1);
    printf("enter num2:");
    scanf("%d",&n2);
    return n1+n2;
}