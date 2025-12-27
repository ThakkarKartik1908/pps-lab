//using recursion print sum of series
#include<stdio.h>
float sum_series(int);

int main(){
    int n;
    float s;
    printf("enter number:");
    scanf("%d",&n);
    if(n<=0){
        printf("enter positive intiger\n");
    }
    else{
     s=sum_series(n);
    printf("sum of series for %d  is = %.3f",n,s);
    }
    return 0;

}

float sum_series(int n){
  if(n==1){
    return 1;
  }
  else{
    return (float)1/n + sum_series(n-1);
  }
}
