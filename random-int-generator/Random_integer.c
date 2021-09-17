//
// Created by User on 17/09/2021.
//

//
// Created by User on 17/09/2021.
//
//A program that generates random integers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int(int range);
void rand_int_seed(void);

/* Uncomment main() function before compiling this programme
int main(){
    int range;
    char s[10];
    rand_int_seed();
    printf("rand_range:");
    gets(s);
    range = atoi(s);
    printf("%i", rand_int(range));
    return 0;
}
*/

int rand_int(int range){
    int r;
    r = rand() % range;
    return r;
}

void rand_int_seed(){
    srand((unsigned) time(NULL));
}