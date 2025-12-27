//find negitive or positive or zero
#include<stdio.h>
int main()
{
    int num;
    printf("enter number =");
    scanf("%d",&num);

    if(num>0){
        printf("%d is positive",num);
    }
    else if(num<0){
        printf("%d is negitive",num);
    }
    else {
        printf("number is zero");
    }
    return 0;
}