//using pointer swap two number
#include<stdio.h>
void swap(int*,int*);
int main(){
    int n1,n2;
     printf("enter num1:");
     scanf("%d",&n1);
     printf("enter num2:");
     scanf("%d",&n2);
     swap(&n1,&n2);
     
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swaping n1=%d and n2=%d",*a,*b);
}