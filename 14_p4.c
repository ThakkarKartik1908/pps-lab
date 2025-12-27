//peretten
#include<stdio.h>
int main()
{   int n,i,j,s;
    printf("enter row:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(s=1;s<i;s++){
               printf(" ");
        }

        for(j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    