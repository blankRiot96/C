#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


typedef enum {
    Choice_ROCK = 0,
    Choice_PAPER = 1,
    Choice_SCISSORS = 2
} Choice;


typedef enum {
    Result_USER_WINS,
    Result_BOT_WINS,
    Result_TIE
} Result;

bool isValidChoice(int choice) {
    /* Checks if choice is valid. */
    return (choice >= 0 && choice <= 3);
}

Choice getUserChoice(void) {
    /* Gets the user's choice. Returns a Choice. */
    
    printf("Choose: \n[0] Rock\n[1] Paper\n[2] Scissors\n: ");
    int choice;
    scanf("%d", &choice);

    if (!isValidChoice(choice)) {
        printf("Please enter a valid choice! Either 0, 1 or 2.");
        exit(1);
    }

    return (Choice)choice;
}

Choice getBotChoice(void) {
    /* Gets the bot's choice. Returns a Choice.*/

    return (Choice)(rand() % 3);
}


Result getWinner(Choice user, Choice bot) {
    /* Gets the winner of the 'Rock Paper Scissors' game.
    Returns a Result. */


    // If both User and Bot have given the same choice, it is a tie.
    if (user == bot) {
        return 2;
    }

    // We use the difference between their choices to decide the outcome.
    int diff = user - bot;
    bool isPositive = (diff > 0);
    bool isAbsOne = (diff == 1 || diff == -1);

    if (isPositive && isAbsOne) 
        return Result_USER_WINS;
    else if (!isPositive && isAbsOne) 
        return Result_BOT_WINS;
    else if (isPositive && !isAbsOne)
        return Result_BOT_WINS;
    else if (!isPositive && !isAbsOne)
        return Result_USER_WINS;
}


void displayResult(Result result) {
    if (result == Result_USER_WINS) 
        printf("You win!\n");
    else if (result == Result_BOT_WINS) 
        printf("You lost :(\n");
    else if (result == Result_TIE) 
        printf("It's a tie.\n");
}

int main(void) {
    // Ensuring we get different results.
    srand(time(NULL));

    Choice userChoice = getUserChoice();
    Choice botChoice = getBotChoice();

    printf("The bot's choice is... %d\n", botChoice);
    Result result = getWinner(userChoice, botChoice);
    if (result == Result_USER_WINS) 
        printf("You win!\n");
    else if (result == Result_BOT_WINS) 
        printf("You lost :(\n");
    else if (result == Result_TIE) 
        printf("It's a tie.\n");
    

    return 0;
}

