//input no of days and clculate y,m,d
#include<stdio.h>
void main()
{  int total_d,year,month,day;
  printf("enter total days =");
  scanf("%d",&total_d);
  year=total_d/365;
  total_d=total_d%365;
  month=total_d/30;
  day=total_d%30;
  printf("year=%d,month=%d,days=%d",year,month,day);

}