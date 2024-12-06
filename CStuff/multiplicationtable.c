#include <stdio.h>
#include <cs50.h>

int main(void){

    int y = 1;
    int x = get_int("What is the number you want to multiplied by? ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", x * y);
        y++;
    }
    

    return 0;
}