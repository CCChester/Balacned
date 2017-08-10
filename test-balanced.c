// =======================================
// = CS136, S14: Assignment 6, Problem 5 =
// = =================================== =
// = Author: C Master [1337]             =
// =======================================

// Interactive testing program to test the balanced module.

#include <stdio.h>

#include "balanced.h"

// Stores the size of the buffer. This is the length of the string. This can be 
// increased and decreased as needed.
static const int BUFFER_SIZE = 1024;

int main(void) {
  char buffer[BUFFER_SIZE + 1];
  char c;
  int i = 0;

  // Zero-fills the buffer.
  for (int i = 0; i < BUFFER_SIZE + 1; ++i) {
    buffer[i] = '\0';
  }

  // Iterates until EOF.
  while (EOF != (c = getchar())) {
    buffer[i] = c;

    i += 1;
  }

  printf("%c\n", is_balanced(buffer) ? 'y' : 'n');

  return 0;
}
