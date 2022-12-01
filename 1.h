#include "stdio.h"
#include "stdlib.h"
void displayAllOddBetween(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
}