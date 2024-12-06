#include <stdio.h>
#include <cs50.h>

void name(string fname){
    printf("%s Tran \n", fname);
}

int main(void)
{
name("Peter");
name("Julia");
return 0;
}