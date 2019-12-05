/*
 * Exercise 1-4.
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

#define STEP 20
#define MAX 300

int main()
{
  for (int fahr = 0; fahr <= MAX; fahr += STEP)
    printf("C: %5.1f F: %3d\n", (5.0 / 9.0) * (fahr - 32), fahr);
  return 0;
}
