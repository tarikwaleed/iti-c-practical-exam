#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "1.h"
#include "3.h"
#include "4.h"
#include "5.h"
int main(int argc, char const *argv[])
{
    // displayAllOddBetween(3,11);
    // displayData();
    // char* arr="aabbbbioncd";
    // int result=frequency(arr,'b');
    // printf("%d",result);
    char* s="abbbbbbbc";
    char* result=removeChar(s,'a');
    puts(result);
    // printf("%s\n",result);
    // while(*(result++)){
    //     printf("%s",*result);
    // }



    return 0;
}
