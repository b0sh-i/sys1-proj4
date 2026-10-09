#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

void print_in_stock(Node *list_head) {
  Node *find_in_stock = list_head;
  int count = 0;
  printf("\nGrocery Items in Stock:\nStock#\tQuantity\tDepartment\tItem\n");
  while (find_in_stock != NULL) {
    if ((find_in_stock->grocery_item.pricing.wholesaleQuantity - find_in_stock->grocery_item.pricing.retailQuantity) > 0) {
      print_item(find_in_stock);
      count++;

    }
    find_in_stock = find_in_stock->next;
  }
  if (count == 0) {
    printf("All items are out of stock.\n");
  }

}
