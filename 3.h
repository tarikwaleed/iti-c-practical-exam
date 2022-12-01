
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
void displayData()
{
    double start = 2.0;
    float data[11][5];
    // Populate
    for (int i = 0; i < 11; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            data[i][j] = pow(start, j);
        }
        start += 0.1;
    }
    // Display
    for (int i = 0; i < 11; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%f ",data[i][j]);
        }
        printf("\n");
    }
}
