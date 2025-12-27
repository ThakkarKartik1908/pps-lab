// file program
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fnumber,*fodd,*feven;
    int n;
    //open the input file
    fnumber=fopen("number.txt","r");
    if(fnumber==NULL){
        printf("error");
        return 1;
    }
    //open the output file
    fodd=fopen("odd.txt","w");
    feven=fopen("even.txt","w");
    //read
    while(fscanf(fnumber,"%d",&n) != EOF){
        if(n%2==0){
            fprintf(feven,"%d\n",n);
        }
        else{
            fprintf(fodd,"%d\n",n);
        }
    }
    fclose(fnumber);
    fclose(fodd);
    fclose(feven);
    //display
    printf("\nodd numbers:\n");
    fodd=fopen("odd.txt","r");
    while(fscanf(fodd,"%d",&n)!=EOF){
        printf("%d,",n);
    }
   fclose(fodd);
    
   printf("\neven number:\n");
   feven=fopen("even.txt","r");
   while(fscanf(feven,"%d",&n)!=EOF){
     printf("%d,",n);
   }
   fclose(feven);
   return 0;
}