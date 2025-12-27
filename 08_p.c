//enter chr is cpital,small,digit,special
#include<stdio.h>
void main()
{
    char ch;
    printf("enter charecter: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("enter charecter is capital letter");
    }
    else if (ch>='a'&& ch<='z'){
        printf("enter charecter is small letter");
    }
    else if (ch>='1'&& ch<='9')
    {
        printf("enter charecter is digit");
    }
    else {
        printf("enter charecter is special case");
    }

}