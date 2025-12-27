//structure
#include<stdio.h>
struct person{
    char name[20];
    char date_of_join[10];// question is why not use int
    int salary;
};

int main(){
    struct person people[5];
    int i;
    for(i=0;i<5;i++){
        printf("\nperson name%d:",i+1);
        scanf("%s",people[i].name);
        printf("date of joining:");
        scanf("%s",people[i].date_of_join);
        printf("salary:");
        scanf("%d",&people[i].salary);
    }
    printf("the below detail of 5 person \n");
    for(i=0;i<5;i++){
        printf("Name:%s|Date of joining:%s|salary:%d\n",people[i].name,people[i].date_of_join,people[i].salary);
    }
    
}