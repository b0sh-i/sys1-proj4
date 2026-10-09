#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

Node *find_by_stock(Node *list_head, int stock_number) {
  Node *stock_finder = list_head;
  while (stock_finder != NULL) {
    if (stock_finder->grocery_item.stockNumber == stock_number) {
      return stock_finder;
    } else {
      stock_finder = stock_finder->next;
    }
  }
  return NULL;
}
