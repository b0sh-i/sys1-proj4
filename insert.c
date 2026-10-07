#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

// Insert the node where asked
void insert(Node **list_head, Node *new_node_ptr) {
  Node *list_info;
  list_info = find_spot(*list_head, new_node_ptr);
  if (list_info == NULL) {
    new_node_ptr->next = *list_head;
    *list_head = new_node_ptr;
  } else {
    new_node_ptr->next = list_info->next;
    list_info->next = new_node_ptr;
  }

}
