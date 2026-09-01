#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int secret = rand() % 100;
    int guess;
    int attempts = 0;

    printf("GUESS THE NUMBER GAME\n");
    printf("I'm thinking of a number between 0 and 99.\n");

    do {
        printf("Enter your guess: ");

        if(scanf("%d", &guess) != 1){ //Only accepting integer
            while(getchar() != '\n');
            printf("Please enter a valid number.\n");
            continue;
        }

        while(getchar() != '\n');
        attempts++;

        if (guess < 0 || guess > 99) {
            printf("Please stay between 0 and 99.\n");
        } else if (guess > secret) {
            printf("Too high! Try a lower number.\n");
        } else if (guess < secret) {
            printf("Too low! Try a higher number.\n");
        }

    } while (guess != secret);

    printf("Congratulations, %d is the correct number\n", guess);
    printf("You needed %d attempt%s.\n", attempts, attempts == 1 ? "" : "s");

    return 0;
}
