#include <stdio.h>

int main() {
    int boxes[4][3];
    int volume[4];  // Corresponding to 4 boxes
    int i, j;

    for (i = 0; i < 4; i++) {
        printf("Box %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            printf("Input length: ");
            scanf("%d", &boxes[i][0]);

            printf("Input width: ");
            scanf("%d", &boxes[i][1]);

            printf("Input height: ");
            scanf("%d", &boxes[i][2]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        // Calculate the volume for each box and store it in the corresponding 'volume' array element
        volume[i] = boxes[i][0] * boxes[i][1] * boxes[i][2];
        printf("\nVolume of box %d is %d", i + 1, volume[i]);
    }

    return 0;
}
