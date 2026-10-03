#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

int main(int argc, char *argv[]) {
  if (argc == 3) {
    Node *list_head = NULL;
    read_file(argv[1]);
  } else {
    printf("Invalid input. Please try again\n");
  }
  return 0;
}
