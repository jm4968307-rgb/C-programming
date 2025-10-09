
#include <stdio.h>

int main() {
//variable declaration 
    int secretNumber, guess, attempts = 0;
    char response[50];

    srand(time(0));
    
    secretNumber = rand() % 20 + 1;

printf("Number guessing game \n");
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("It took you %d attempts to guess the number.\n", attempts);
            break;
        }
    }

    return 0;
}