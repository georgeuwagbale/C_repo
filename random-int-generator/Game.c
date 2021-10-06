//
// Created by User on 28/09/2021.
//
// This program is a game in which you guess a number, and it keeps track of your score

#include <stdio.h>
#include <stdlib.h>
#include "Random_integer.c"

void score_calc(int *score);
void lives_calc(int *lives);

int main(){
    int score, lives, random_num, user_input, controller;
    char s[10];
    // Initialization of variables

    score = 0;
    lives = 3;
    controller = 1;

    rand_int_seed();
    printf("You have to guess a number between a specified range.\n");
    printf("If the number tallies with that which the computer chooses, then you'll score 2 points.\n");
    printf("You have %i lives\n", lives);
    do{
        random_num = rand_int(10);
        printf("Guess a number between 1 and 10\n");
        gets(s);
        user_input = atoi(s);
            if (user_input == random_num){
                score_calc(&score);
                printf("Correct!\nYou have %i points.\n", score);
            }
            else if (user_input == 0 || lives == 0){
                controller = 0;
            }
            else{
                lives_calc(&lives);
                printf("You now have %i lives\n", lives);
            }
        }
    while (controller);
    printf("Game over\nYour scored %i points", score);

    return 0;
}

void score_calc(int *score){
    *score +=2;
}

void lives_calc(int *lives){
    *lives -=1;
}