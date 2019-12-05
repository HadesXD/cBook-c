#include <stdio.h> // printf
#include <stdlib.h> // malloc, calloc, realloc, free
#include <string.h> // strcpy

void fail(void) {
  printf("Memory could not be allocated\n");
  exit(EXIT_FAILURE);
}

int main(void)
{
  // allocate 13 bytes on the heap to hold 13 chars
  char *name = malloc(13 * sizeof(char));
  if (name == NULL) fail();
  strcpy(name, "strole");

  // allocates 4 or 8 bytes on the heap to hold 2 ints, intialized to 0
  int *numbers = calloc(2, sizeof(int));
  if (numbers == NULL) fail();
  numbers[0] = 1; numbers[1] = 2;

  // reallocate name to 25 bytes
  name = realloc(name, 25 * sizeof(char));
  if (name == NULL) fail();
  strcat(name, " is best.");

  // release the memory back to the OS
  free(name);
  free(numbers);

  return EXIT_SUCCESS;
}
