//interchange value using three vaar
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("befor interchange value a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after  interchange value a=%d and b=%d",a,b);

}
