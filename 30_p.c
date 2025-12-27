//  using function calculate the sum
#include<stdio.h>
// no arrgument and no return value
void add();

int main(){
    add();
    return 0;
}

void add(){
    int num1,num2;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("sum=%d",num1+num2);
}