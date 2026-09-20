#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomNum=(rand()%100)+1;
    int count=0;
    int guess;
    while(guess!=randomNum){
        scanf("%d",&guess);
        if(guess<randomNum){
            printf("Guess er value bara\n");
            count++;
        } else if(guess>randomNum){
            printf("Guess er value koma\n");
            count++;
        } else{
            printf("shera!\n");
            count++;
            break;
        }
    }
    printf("The correct random number was %d and you guessed it at #%d attempt\n",randomNum,count);
    return 0;
}