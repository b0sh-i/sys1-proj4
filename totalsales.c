
#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

int total_sales(Node *list_head) {
  Node *find_price_and_quan = list_head;
  int sales = 0;
  while (find_price_and_quan != NULL) {
    sales = sales + find_price_and_quan->grocery_item.pricing.retailQuantity;
    find_price_and_quan = find_price_and_quan->next;
  }
  return sales;
}
