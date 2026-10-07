#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

Node *find_spot(Node *list_head, Node *new_node_ptr) {
  Node *walk_list;
  if (list_head == NULL || new_node_ptr->grocery_item.stockNumber > list_head->grocery_item.stockNumber) {
    return NULL;
  } else {
    walk_list = list_head;
    while (walk_list->next != NULL && walk_list->next->grocery_item.stockNumber > new_node_ptr->grocery_item.stockNumber) {
      walk_list = walk_list->next;
    }
  }
  return walk_list;
}
