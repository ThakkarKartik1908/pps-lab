//calculater  for add,sub,multi,divid using switch
#include<stdio.h>
void main ()
{
 char c;
 int a,b;
 printf("enter a :");
 scanf("%d",&a);
 printf("enter b :");
 scanf("%d",&b);
 printf("enter task(+,-,*,/): ");
 scanf(" %c ",&c);
    switch(c) {
   case'+':
   printf("sum of %d and %d = %d",a,b,a+b);
   break;
   case'-':
   printf("sub of %d and %d = %d",a,b,a-b);
   break;
   case'*':
   printf("multi of %d and %d = %d ",a,b,a*b);
   break ;
   case'/':
   printf ("divid of %d and %d = %d ",a,b,a/b);
   break;
   defult :
   printf("worng task !");

 }

}