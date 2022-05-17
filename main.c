#include <stdio.h>

// need to implement [] operations
enum Operations {
  moveF = 62,
  moveB = 60,
  changeU = 43,
  changeD = 45,
  print = 46,
  read = 44,
  loopS = 91,
  loopE = 93,
};

int main() {
  // init
  // char array[30000] = {0};
  // char *ptr = array;

  // add to pointer
  // ++*ptr;

  // minus from pointer
  // --*ptr;

  // move pointer backward
  // --ptr;
  
  // move pointer forward
  // ++ptr;
  
  // print ptr char
  // putchar(*ptr);

  enum Operations operations[30000];
  int loopDepth = 0; 
  int currentPtrPos = 0;

  char array[30000] = {0};
  char *ptr = array;

  int c;
  FILE *file;
  file = fopen("code.e", "r");

  while ((c = getc(file)) != EOF) {
    //printf("%d\n", c);
    if (loopDepth < 1) {
      switch (c) {
        case (moveF):
          ++ptr;
          break;
        case (moveB):
          --ptr;
          break;
        case (changeU):
          ++*ptr;
          break;
        case (changeD):
          --*ptr;
          break;
        case (print):
          putchar(*ptr);
          break;
        case (read):
          *ptr = getchar();
          break;
        case (loopS):
          loopDepth++;
          break;
        case (loopE):
          loopDepth--;
          break;
      }
    } else {
      printf("Looping");
      switch (c) {
        case (moveF):
          break;
        case (moveB):
          break;
        case (changeU):
          break;
        case(changeD):
          break;
        case (print):
          break;
        case(read):
          break;
        case (loopS):
          loopDepth++;
          break;
        case (loopE):
          loopDepth--;
          break;
      }
    }
  }
  fclose(file);
  return 0;
}
