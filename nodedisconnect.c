#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

void node_disconnect(Node *found_node, Node **list_head) {
  Node *previous_node = *list_head;
  if (found_node == *list_head) {
    *list_head = found_node->next;
    free(found_node);
  } else {
    while (previous_node->next != found_node) {
      previous_node = previous_node->next;
    }
    previous_node->next = found_node->next;
    free(found_node);
  }
}
