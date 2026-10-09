#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

float revenue(Node *list_head) {
  Node *find_price_and_quan = list_head;
  float revenue = 0;
  while (find_price_and_quan != NULL) {
    revenue = revenue + (find_price_and_quan->grocery_item.pricing.retailPrice * find_price_and_quan->grocery_item.pricing.retailQuantity);
    find_price_and_quan = find_price_and_quan->next;
  }
  return revenue;
}
