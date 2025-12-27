//conat two string
#include<stdio.h>
#include<string.h>

void main(){
    char s1[100],s2[100];
    printf("enter string 1 :");
    gets(s1);
    printf("enter string 2 :");
    gets(s2);
    printf("concat string is =%s",strcat(s1,s2));
    
}
