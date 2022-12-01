#include "stdio.h"
#include "stdlib.h"
char *removeChar(char *s, char c)
{
    char *arr = (char *)(malloc(100 * sizeof(char)));
    int i;
    i = 0;
    while (*s++)
    {
        if (*s != c)
        {
            arr[i] = c;
        }
        i++;
    }
    return arr;
}