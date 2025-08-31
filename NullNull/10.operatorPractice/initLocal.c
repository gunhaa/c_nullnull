#pragma warning(disable:4700)
#include <stdio.h>

int main(void)
{
    unsigned int acc;

    acc += 1;
    acc += 2;
    acc += 3;

    printf("Total: %u", acc);
}