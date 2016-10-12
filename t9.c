#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ATTEMPTS 10
#define MAX_NUM 64

int main()
{
    srand((unsigned)time(NULL)); //setting seed for rand() with current time
    int g, t, i; //g - our number, t - input, i - iterator
    g = rand()%(MAX_NUM+1); //rand() returns a number between 0 and 32767, that's too much, hence rand%MAX_NUM+1
    printf("Greetings... and welcome. I want to play a game. I have a number between 0 and %d, and you have %d attempts. It will be like finding a needle in a haystack.\nYour guess?\n", MAX_NUM, ATTEMPTS);
    for (i = ATTEMPTS; i > 0; i--) {
        printf("%d> ", i);
        scanf("%d", &t);
        if(g == t) {
            printf("Lucky you are!\n");
            return 0;
        }
    }
    printf("You lose, my number was %d\n", g);
    return 0;
}
