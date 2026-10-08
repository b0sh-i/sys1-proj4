#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

Node *build_node(FILE *input_file) {
  int count = 0;
  Node *new_node = calloc(1, sizeof(Node));
  if (new_node == NULL) {
    printf("Allocation failed. Exiting\n");
    exit(EXIT_FAILURE);
  }
    count = fscanf(input_file, " %49[^\t]\t%29[^\t]\t%d\t%f\t%f\t%d\t%d", new_node->grocery_item.item, 
           new_node->grocery_item.department,
           &new_node->grocery_item.stockNumber, 
           &new_node->grocery_item.pricing.retailPrice,
           &new_node->grocery_item.pricing.wholesalePrice,
           &new_node->grocery_item.pricing.retailQuantity,
           &new_node->grocery_item.pricing.wholesaleQuantity);
  if (count == 7) {
    return new_node;
  } else {
    free(new_node);
    return NULL;
  }
}
