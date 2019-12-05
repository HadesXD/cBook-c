/*
 * Exercise 1-13.
 * Write a program to print a histogram of the lengths of words in its input. It is
 * easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */

#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int c, count = 0, id = 0;
    int output = OUT;

    while((c=getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            putchar('\n');
        else
            putchar('*');
    }
}