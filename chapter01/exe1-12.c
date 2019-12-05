/*
 * Exercise 1-12.
 * Write a program that prints its input one word per line.
 */

 #include <stdio.h>

#define OUT 0
#define IN 1

 int main()
 {
   int c, systemT = IN;
   
   while ((c = getchar()) != EOF)
   {
     if ((c == ' ' || c == '\t' || c == '\n') && systemT == IN) {
       putchar('\n');
       systemT = OUT;
     }
     else if (c != ' ' && c != '\n' && c != '\t') {
       systemT = IN;
       putchar(c);
     }
   }
   return 0;
}
