// convert string into upper csse 
#include<stdio.h>
#include<string.h>
void main(){
    char ch[100];
    int i;
    printf("enter string:");
    gets(ch);
    printf("converted into uppercase:%s",strupr(ch));
    
    printf("\nwithout using function");

    for(i=0;ch[i]!='\0';i++){
         if(ch[i]>='a'&& ch[i]<'z'){
            ch[i]=ch[i]-32;
         }
    }
    printf("uppercase=%s",ch);

}