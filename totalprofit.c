
#include <stdio.h>
#include <stdlib.h>
#include "project4.h"

float total_profit(Node *list_head) {
  Node *find_price_and_quan = list_head;
  float profit = 0;
  profit = revenue(list_head) -  wholesale_cost(list_head) + current_investment(list_head);
  return profit;
}
