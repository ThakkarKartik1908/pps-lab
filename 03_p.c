// interchange the value using two var
#include<stdio.h>
void main()
{
  int a,b;
  printf ("enter a=");
  scanf("%d",&a);
  printf ("enter b=");
  scanf("%d",&b);
  printf("befor the interchange the value of a=%d and b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after the interchange the value of a=%d and b=%d",a,b);
}