#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int rand_num = (rand() % 100) + 1;
    int n_o_g = 0;
    int guessed;
    do
    {
    printf("Guess the number.\n");
    scanf("%d", &guessed);
    if (guessed>rand_num)
    {
        printf("You have guessed a greater number\n");
    }
    else
    {
    printf("You have guessed a smaller number\n");
    }
    n_o_g++;

    } while (guessed!=rand_num);
    printf("Correct Number, Number of guesses is %d\n", n_o_g);
    return 0;
}
