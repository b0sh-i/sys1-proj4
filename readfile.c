#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

int read_file(Node **list_head, char *file_input) {
  FILE *input_file;
  Node *new_node;
  int count = 0;
  input_file = fopen(file_input, "r");
  while ((new_node = build_node(input_file)) != NULL) {
    insert(list_head, new_node);
    count++;
  }
  return count;
}

