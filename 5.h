#include "stdio.h"
#include "stdlib.h"
#include <string.h>
char *removeChar(char *s, char c)
{
    int maxLen = strlen(s) + 1;
    char *arr = (char *)(malloc(maxLen * sizeof(char)));
    char *p = arr;
    while (*s)
    {
        if (*s != c)
        {
            *p = *s;
            p++;
        }
        s++;
    }
    *p = '\0';
    return arr;
}