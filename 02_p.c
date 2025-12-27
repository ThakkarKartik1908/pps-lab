// simple interst
# include<stdio.h>
void main()
{
   int p,r,n;
   float i;
   printf("enter the principle amount :");
   scanf("%d",&p);
   printf("enter the rate of interest :");
   scanf("%d",&r);
   printf("enter the number of years :");
   scanf("%d",&n);
   i= (p*r*n)/100;
   printf("the simple interest is =%.2f ",i);

}