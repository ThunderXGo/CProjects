#include <stdio.h>

int main(void)
{
    int y = -1;
    int x = -1;

    // Prompt the user for input until valid values are provided
    while (x < 0 || y < 0)
    {
        printf("How many rows should there be? ");
        scanf("%d", &x);  // Read the number of rows

        printf("How many columns should there be? ");
        scanf("%d", &y);  // Read the number of columns
    }

    // Print the grid
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
