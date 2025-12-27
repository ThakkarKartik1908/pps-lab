//short an array in acending order
#include<stdio.h>
void main(){
    int n,i,t,j;
    printf("enter number you want:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter number %d = ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          if(a[i]>a[j]) // for decending order a[i]<a[j]
          {
            t=a[i];
            a[i]=a[j];
            a[j]=t;

        }
    }
    }
    printf("the acending order of give element:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
}