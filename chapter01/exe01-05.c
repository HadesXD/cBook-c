/*
 * Exercise 1-5.
 * Modify the temperature conversion program to print the table in reverse order,
 * that is, from 300 degrees to 0.
 */

#include <stdio.h>

#define MAX 300
#define STEP 20

int main()
{
  for (int fahr = MAX; fahr >= 0; fahr -= STEP)
    printf("F: %3d C: %5.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  return 0;
}
