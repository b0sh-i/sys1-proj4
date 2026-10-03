#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

void read_file(char *file_input) {
  FILE *input_file;
  input_file = fopen(file_input, "r");
  if (input_file == NULL) {
    printf("No file found\n");
    exit(EXIT_FAILURE);
  } else {
    char file_data;
    while (fscanf(input_file, "%c", &file_data) != EOF) {
      printf("%c", file_data);
    }
  }
}
