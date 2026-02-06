#include "../include/list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// simple strdup replacement for portability
static char *safe_strdup(const char *s) {
if (!s) return NULL;
size_t n = strlen(s) + 1;
char *p = malloc(n);
if (!p) return NULL;
memcpy(p, s, n);
return p;
}

Node *list_insert_head(Node **head, const char *str) {
if (!head) return NULL;
Node *n = malloc(sizeof(Node));
if (!n) return NULL;
n->data = safe_strdup(str);
n->prev = NULL;
n->next = *head;
if (*head) (*head)->prev = n;
*head = n;
return n;
}

Node *list_find(Node *head, const char *str) {
for (Node *cur = head; cur; cur = cur->next) {
if (cur->data && strcmp(cur->data, str) == 0) return cur;
}
return NULL;
}

void list_delete(Node **head, Node *node) {
if (!head || !*head || !node) return;
if (node->prev) node->prev->next = node->next;
else *head = node->next; // node was head
if (node->next) node->next->prev = node->prev;
free(node->data);
free(node);
}

void list_print(Node *head) {
printf("List (head->tail):");
for (Node *cur = head; cur; cur = cur->next) {
printf(" [%s]", cur->data ? cur->data : "(null)");
}
printf("\n");
}

void list_free(Node **head) {
if (!head) return;
Node *cur = *head;
while (cur) {
Node *next = cur->next;
free(cur->data);
free(cur);
cur = next;
}
*head = NULL;
}