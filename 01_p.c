// add,sun,multi,divid
#include<stdio.h>
int main()
{
    float a,b;
    printf("enter a :");
    scanf("%f",&a);
    printf("enter b :");
    scanf("%f",&b);

    printf("sum of %.2f and %.2f is =%.2f\n",a,b,a+b);
    printf("sub of %.2f and %.2f is =%.2f\n",a,b,a-b);
    printf("multiplicatiopn of %.2f and %.2f is = %.2f\n",a,b,a*b);
    printf("divid of %f and %.2f is =%.2f\n",a,b,a/b);

    return 0;

}