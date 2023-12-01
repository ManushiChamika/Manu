#include <stdio.h>

int main() {
    int players, player, total, score, playerNum, max = 0, winner;

    printf("Input number of players: ");
    scanf("%d", &players);

    for (player = 1; player <= players; player++) {
        total = 0; // Reset total for each player

        printf("Input player number: ");
        scanf("%d", &playerNum);

        for (int N = 1; N <= 3; N++) {
            printf("Input score %d: ", N);
            scanf("%d", &score);
            total += score;
        }

        printf("\nTotal Score for player %d: %d\n", playerNum, total);

        if (total > max) {
            max = total;
            winner = playerNum;
        }
    }

    printf("The winner is player %d with a total score of %d\n", winner, max);

    return 0;
}
