//fahrenheit form centigrade
#include<stdio.h>
void main()
{
    float f,c;
    printf("enter centigrade = ",c);
    scanf("%f",&c);
    printf("fahranheit =%2.f\n",(1.8)*c+32);
  // centigrade from  fahranheit
    printf("enter fahrenheit =");
    scanf("%f",&f);
    printf("centigrade =%.2f",(f-32)/1.8);
}