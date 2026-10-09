#ifndef PROJECT_4_
#define PROJECT_4_

struct Cost {
  float wholesalePrice;
  float  retailPrice;
  int wholesaleQuantity;
  int retailQuantity;
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

int read_file(Node **list_head, char *file_input);

void insert(Node **list_head, Node *new_node_ptr);

void delete_node();

Node *find_spot(Node *list_head, Node *new_node_ptr);

Node *build_node(FILE *input_file);

void print_in_stock(Node *list_head);

void print_out_stock(Node *list_head);

void print_item(Node *selected_node);

#endif 
