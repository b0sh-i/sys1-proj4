#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "project4.h"

void dept_search(Node *list_head) {
  char search[30];
  printf("Enter Department Name to print: ");
  scanf("%29s", search);
  printf("\nGrocery Item list for %s:\nStock#\tQuantity\tDepartment\tItem\n", search);
  find_match(list_head, search);

}
