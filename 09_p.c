//result using if else ledder
#include<stdio.h>
void main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100){
        printf("distinction");
    }
    else if( marks>=60 && marks<=70){
        printf("first class");
    }
    else if (marks>=40 && marks<=59){
        printf("second class");
    }
    else if(marks<40){
        printf("fail");
    }
    else{
        printf("worng marks!");
    }
    
}