#include <stdio.h>
#include "../include/list.h"

int main(void) {
Node *head = NULL;

printf("Inserting items...\n");
list_insert_head(&head, "delta");
list_insert_head(&head, "gamma");
list_insert_head(&head, "beta");
list_insert_head(&head, "alpha");

list_print(head);

const char *target = "gamma";
printf("Finding '%s'...\n", target);
Node *found = list_find(head, target);
if (found) printf("Found node with data: %s\n", found->data);

printf("Deleting '%s'...\n", target);
list_delete(&head, found);
list_print(head);

printf("Deleting head (alpha)...\n");
Node *old_head = head;
list_delete(&head, old_head);
list_print(head);

printf("Freeing remaining nodes...\n");
list_free(&head);
list_print(head);

return 0;
}