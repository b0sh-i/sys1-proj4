#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

int main(int argc, char *argv[]) {
  Node *list_head = NULL;
  int read_amount;
  // Make sure the args are not over or under the required amount
  if (argc == 3) {
    read_amount = read_file(&list_head, argv[1]);
    printf("%d records read\n", read_amount);
  } else {
    printf("Invalid input. Please try again\n");
    return 1;
  }
  return 0;
}
