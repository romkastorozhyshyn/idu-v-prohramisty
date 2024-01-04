#include <stdio.h>

int main() {
    int canvasSize = 30;

    for (int i = 0; i < canvasSize; ++i) {
        for (int j = 0; j < canvasSize; ++j) {
            if (((i == 10 || i == 20) && (j >= 11 && j <= 19)) ||
                ((i == 11 || i == 19) && (j >= 10 && j <= 20)) ||
                ((i == 12 || i == 18) && (j >= 9 && j <= 21)) ||
                ((i == 13 || i == 17) && (j >= 8 && j <= 22)) ||
                ((i == 14 || i == 16) && (j >= 7 && j <= 23)) ||
                (i == 15 && (j >= 6 && j <= 24))) {
                printf("█");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}