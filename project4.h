#ifndef PROJECT_4_
#define PROJECT_4_

struct Cost {
  float wholesalePrice;
  float  retailPrice;
  int wholesaleQuantity
  int retailQuantity
};
struct Data {
  char item[50];
  char department[30];
  int stockNumber;
  struct Cost pricing;
};

typedef struct Node {
  struct Data grocery_item;
  struct Node *next;
} Node;

void read_file(char *file_input);

void insert();

void delete_node();

#endif 
