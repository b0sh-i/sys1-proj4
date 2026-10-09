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

void delete_node(Node **list_head);

Node *find_spot(Node *list_head, Node *new_node_ptr);

Node *build_node(FILE *input_file);

void print_in_stock(Node *list_head);

void print_out_stock(Node *list_head);

void print_item(Node *selected_node);

void find_by_stock(*list_head, int stock_number);

void node_disconnect(Node *found_node, Node **list_head);

float revenue(Node *list_head);

float wholesale_cost(Node *list_head);

float current_investment(Node *list_head);

int total_sales(Node *list_head);

float total_profit(Node *list_head);

float average_profit_sale(Node *list_head);

void dept_search(Node *list_head);

void  lower(char *search);

void find_match(Node *list_head, char *search);

#endif 
