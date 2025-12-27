// length of string
#include<stdio.h>
#include<string.h>
void main(){
    char s1[10];
    int i,a;
    printf("enter string:");
    gets(s1);
    printf("length of string=%d",strlen(s1));  
   
    printf("\nwithout using string function ");
    for(i=0;s1[i]!='\0';i++){
        a++;
    }
    printf("\nstring length=%d",a);
    
}