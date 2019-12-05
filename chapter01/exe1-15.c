/*
 * Exercise 1.15.
 * Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
 */

#include <stdio.h>

#define STEP 20
#define MAX 300

int temperature();

int main()
{
  temperature();
}

int temperature()
{
    for (int fahr = 0; fahr <= MAX; fahr += STEP)
        printf("F: %3d C: %.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
