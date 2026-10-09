
#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

float average_profit_sale(Node *list_head) {
  float profit = 0;
  profit = total_profit(list_head) / total_sales(list_head);
  return profit;
}
