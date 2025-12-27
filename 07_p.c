//read three number find max out of them using nested if else
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter number 1=");
    scanf("%d",&n1);
    printf("enter number 2=");
    scanf("%d",&n2);
    printf("enter number 3=");
    scanf("%d",&n3);

    if(n1>n2){
         if(n1>n3){
            printf("%d is maximum ",n1);
         }
         else{
            printf("%d is maximum",n3);
         }
    }
    else{

        if(n2>n3){
            printf("%d is maximum",n2);
        }
        else{
            printf("%d is  maimum",n3);
        }
    }

}