/*
 * Exercise 1-14.
 * Write a program to print a histogram of the frequencies of different characters
 * in its input
 */

#include<stdio.h>

#define START 65
#define END 123  /* Total Number of characters is 128: 0 - 127 */

int main(void)
{
    int c, st = 0;
    int character[END];

    for(int i = START; i < END; ++i) //all 128 spaces have the value 0.
      character[i] = 0;

    while((c=getchar()) != '!') // original was EOF.
      ++character[c];

    for(int i = START; i < END; ++i)
    {
        printf("\n%c ", i);

        for(int j = 0; j < character[i]; ++j)
            putchar('*');
    }
    
return 0;
}
