#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// integer code of the characters that perform functions
enum Operations {
  moveF = 62,    // >
  moveB = 60,    // <
  changeU = 43,  // +
  changeD = 45,  // -
  print = 46,    // .
  read = 44,     // ,
  mult = 42,     // *
};

int main(int argc, char *argv[]) {
  // Init variables
  char array[32768] = {0};
  // Pointer of the char array to make magic
  char *ptr = array;

  // char represented as an integer
  int c;

  // File to read
  FILE *file;
  if (argc == 2) {
    //printf("%s", argv[1]);
    file = fopen(argv[1], "r");
  } else if (argc == 1) {
    printf("Please pass in the file name\n");
    return 0;
  }

  // Loop over file until the EOF
  while ((c = getc(file)) != EOF) {
    // Switch statement of char
    // Switch statement is nicer than if/else
    switch (c) {
      // Move forward through pointer
      case (moveF):
        ++ptr;
        break;
      // Move backward through pointer
      case (moveB):
        --ptr;
        break;
      // Increment to pointer value
      case (changeU):
        ++*ptr;
        break;
      // Decrement to pointer value
      case (changeD):
        --*ptr;
        break;
      // Print out the value of the pointer value
      case (print):
        putchar(*ptr);
        break;
      // Read user input to pointer value
      case (read):
        *ptr = getchar();
        break;
      case (mult):
        sprintf(&*ptr, "%c", atoi(&*ptr) * atoi(&*ptr));
        putchar(atoi(&*ptr) * 4);
        putchar(++*ptr);
        break;
    }
  }
  fclose(file);
  return 0;
}
