#ifndef LIST_H
#define LIST_H

#include <stddef.h>

typedef struct Node {
char *data; // heap-allocated string
struct Node *prev;
struct Node *next;
} Node;

// Insert a copy of `str` at the head of the list. Returns new head.
Node *list_insert_head(Node **head, const char *str);

// Find the first node whose string equals `str`. Returns node or NULL.
Node *list_find(Node *head, const char *str);

// Delete node from the list; updates head if needed. Frees node's memory.
void list_delete(Node **head, Node *node);

// Print list contents (from head to tail)
void list_print(Node *head);

// Free entire list and set *head to NULL
void list_free(Node **head);

#endif // LIST_H