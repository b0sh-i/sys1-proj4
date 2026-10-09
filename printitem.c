#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

void print_item(Node *selected_node) {
  int on_hand = (selected_node->grocery_item.pricing.wholesaleQuantity - selected_node->grocery_item.pricing.retailQuantity);
  printf("%d\t%d\t%s\t%s\n", selected_node->grocery_item.stockNumber, on_hand,  selected_node->grocery_item.department, selected_node->grocery_item.item);
}
