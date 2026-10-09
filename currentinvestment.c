
#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

float current_investment(Node *list_head) {
  Node *find_price_and_quan = list_head;
  float investment = 0;
  while (find_price_and_quan != NULL) {
    investment = investment + (find_price_and_quan->grocery_item.pricing.wholesalePrice * (find_price_and_quan->grocery_item.pricing.wholesaleQuantity - find_price_and_quan->grocery_item.pricing.retailQuantity));
    find_price_and_quan = find_price_and_quan->next;
  }
  return investment;
}
