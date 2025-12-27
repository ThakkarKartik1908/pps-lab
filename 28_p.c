//copy string without using function
#include<stdio.h>

int  main(){
    char s1[100],s2[100];
    int i;
    printf("enter string:");
    gets(s1);
    for(i=0; s1[i]!='\0';i++){
       
        s2[i]=s1[i];
    }
    s2[i]='\0';// terminat the loop
    printf("copied string =%s\n",s2);
     return 0;
}