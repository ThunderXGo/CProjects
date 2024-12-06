#include <stdio.h>

void name(char* fname) {
    printf("%s Tran \n", fname);
}

int main(void)
{
    name("Peter");
    name("Julia");
    return 0;
}
