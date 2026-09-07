#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int greater(void);
int lesser(void);

int main() {
    srand(time(NULL));

    int random = rand() % 100 + 1;
    int guess;

    printf("Enter a guess: ");
    scanf("%d", &guess);

    while (guess != random) {
        if (guess > random) {
            guess = greater();
        }

        if (guess < random) {
            guess = lesser();
        }
    }

    printf("\nYou guessed the right number! It is %d\n", random);

    return 0;
}

int greater(void) {
    int a;

    printf("You guessed a larger number, try again.\n");
    printf("Enter a guess: ");
    scanf("%d", &a);

    return a;
}

int lesser(void) {
    int a;

    printf("You guessed a smaller number, try again.\n");
    printf("Enter a guess: ");
    scanf("%d", &a);

    return a;
}
