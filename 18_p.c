//max and min given 10
#include<stdio.h>
int main()
{   int i,max,min,num[10];
    printf("enter 10 numbers\n");
    for(i=0;i<10;i++){
    printf("enter %d num:",i+1);
    scanf("%d",&num[i]);
    }
  max=num[0];
  min=num[0];

   for(i=0;i<10;i++){

    if(num[i]>max){
        max=num[i];
    }
    if(num[i]<min){
        min=num[i];
    }
   }
   printf("maximum number is=%d",max);
   printf("\nminimum number is=%d",min);
   return 0;
    
}