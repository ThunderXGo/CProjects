#include <stdio.h>

int main(void)
{
    int y = 1;
    int x;

    // Prompt for user input
    printf("What is the number you want to multiply by? ");
    scanf("%d", &x);  // Get the user's input

    // Print the multiplication table
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", x * y);
        y++;
    }

    return 0;
}
