#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "project4.h"

void find_match(Node *list_head, char *search) {
  Node *match_finder = list_head;
  while (match_finder != NULL) {
    if (strstr(match_finder->grocery_item.department, search)){
      print_item(match_finder);
    }
    match_finder = match_finder->next;
  }
}
