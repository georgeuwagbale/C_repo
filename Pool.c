//
// Created by User on 21/09/2021.
//
// A programme that picks pool numbers at random

#include <stdio.h>
#include "random-int-generator/Random_integer.c"

#define RANGE 50



int main(){
    int i,ball;
    int numbers[RANGE];
    rand_int_seed();

    for(i=0; i<RANGE; i++){
        numbers[i] = 0;
    }

    for (i=0; i<RANGE; i++){
        do{
            ball = rand_int(RANGE) +1;
        }
        while (numbers[ball]);

        numbers[ball] = 1;
        printf("Your number is:-");
        printf("%3d\n", ball);
        printf("Hit ENTER to continue");
        getchar();
        //printf("%i", numbers[i]);
    }
    return 0;
}
