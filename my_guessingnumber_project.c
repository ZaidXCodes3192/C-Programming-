#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

  int sec,gn,attempts=0;
    srand(time(0));
    sec = (rand() % 100) + 1;

     while(gn!=sec){
        printf("\nGUESS THE NUMBER:\n");
        scanf("%d",&gn);
        attempts++;
        if (gn>sec){
            printf("High!.TRY LOWER");
        }
        else if(gn<sec){
            printf("Low!.TRY HIGHER");
        }
        else{
            printf("Conguratulations.You guess the correct number");
        }
        
        
    }
    printf("\n%d attempts taken by you to guess the correct number",attempts);   
    return 0;
}