#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

void print_out_stock(Node *list_head) {
  Node *find_out_stock = list_head;
  int count = 0;
  printf("\nGrocery Items out of Stock:\nStock#\tQuantity\tDepartment\tItem\n");
  while (find_out_stock != NULL) {
    if ((find_out_stock->grocery_item.pricing.wholesaleQuantity - find_out_stock->grocery_item.pricing.retailQuantity) == 0) {
      print_item(find_out_stock);
      count++;

    }
    find_out_stock = find_out_stock->next;
  }
  if (count == 0) {
    printf("All items are in stock.\n");
  }
}
