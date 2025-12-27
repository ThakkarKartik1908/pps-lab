//number is palindrome or not    121 revers 121
#include<stdio.h>
void main()
{
  int n,c,r,sum=0;
  printf("enter number:");
  scanf("%d",&n);
  c=n;
  while(n>0){
    r= n%10;
    sum= r+ (sum*10);
    n=n/10;
  }
  if(c==sum){
    printf("%d is palindrome",c);
  }
  else {
    printf("not plindrome");
  }
}