//structure
#include<stdio.h>
#include<string.h>
struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_avg;// why not use array in this
};

int main(){
    struct cricket player[50];
    int n,i;

    printf("enter number of player(max 50):");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nplayer name %d:",i+1);
        scanf("%s",player[i].player_name);
        printf("team name %d:",i+1);
        scanf("%s",player[i].team_name);
        printf("Batting avg:");
        scanf("%f",&player[i].batting_avg);
    }
    printf("Team wise player list with batting avarege\n");
    printf("player name\tTeam name\t Batting avg\n");
    for(i=0;i<n;i++){
        printf("%s\t\t%s\t\t %f\n",player[i].player_name,player[i].team_name,player[i].batting_avg);
 //also we print in differt
    }

 return 0;
}