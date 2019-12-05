/*
 * Exercise 1-8.
 * Write a program to count blanks, tabs, and newlines.
 */

 #include <stdio.h>

int main()
 {
   int c, space = 0, tab = 0, nl = 0;

   while ((c = getchar()) != EOF)
   {
    if (c == '\n')
      ++nl;
    else if (c == ' ')
     ++space;
    else if (c == '\t')
     ++tab;
   }

    printf("newLine: %d\nspace: %d\ntab: %d", nl, space, tab);
    return 0;
 }
