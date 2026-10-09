#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

void delete_node(Node **list_head) {
  int number_input = 0;
  Node *found_node;
  printf("Please enter the grocery item stock number you wish to delete, followed by enter. ");
  scanf("%d", &number_input);
  found_node = find_by_stock(*list_head, number_input);
  if (found_node == NULL) {
    printf("Item Not Found\n");
  } else {
    node_disconnect(found_node, list_head);
    printf("Deleted item %d\n", number_input);
  }
}
