
#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

float wholesale_cost(Node *list_head) {
  Node *find_price_and_quan = list_head;
  float wholesale = 0;
  while (find_price_and_quan != NULL) {
    wholesale = wholesale + (find_price_and_quan->grocery_item.pricing.wholesalePrice * find_price_and_quan->grocery_item.pricing.wholesaleQuantity);
    find_price_and_quan = find_price_and_quan->next;
  }
  return wholesale;
}
