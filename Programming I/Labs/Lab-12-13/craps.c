#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void); //Generate two random numbers, return their sum.
bool play_game(void); //Return Wins=true or Lose=false, showing dice rolls. 

int main()
{
    srand(time(NULL));

    int wins_counter = 0;
    int losses_counter = 0;
    char s;
    bool tf;

    while(true) {
        tf = play_game();
        if(tf == true) {
            printf("You win!\n");
            wins_counter++;
        }
        else {
            printf("You Lose!\n");
            losses_counter++;
        }
        printf("Play again? ");
        scanf(" %c", &s);

        if(s == 'y' || s == 'Y') {
            
        }
        else {
            break;
        }
    }

    printf("Wins: %d\tLosses: %d",wins_counter, losses_counter);

    return 0;
}

int roll_dice(void){
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    return dice1 + dice2;
}

bool play_game(void){
    int point;
    point = roll_dice();

    printf("You rolled: %d\n", point);
    printf("You point: %d\n", point);

    if(point == 7 || point == 11) {
        return true;
    }
    if(point == 2 || point == 3 || point == 12) {
        return false;
    }

    int rolled = point;

    while(rolled != 7) {
        rolled = roll_dice();
        printf("You rolled: %d\n", rolled);
        if(rolled == point)
            return true;
    }

    return false;
}