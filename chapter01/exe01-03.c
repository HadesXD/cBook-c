/*
 * Exercise 1-3.
 * Modify the temperature conversion program to print a heading above the table.
 * Print Fahrenheit-Celsius table from 0, 20, ..., 300
 */

#include <stdio.h>

#define STEP 20
#define MAX 300

int main()
{
  for (int fahr = 0; fahr <= MAX; fahr += STEP)
    printf("F: %3d C: %.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
