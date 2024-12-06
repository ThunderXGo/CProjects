#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int y = -1;
    int x = -1;
    while (x < 0 || y < 0)
    {
        x = get_int("How many rows should there be? ");
        y = get_int("How many collumns should there be? ");
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
        printf("#");
        }
        printf("\n");
    }
}