#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node_s {
    char* data;
    struct node_s* next;
} node_t;

// Function prototypes
void add_node(node_t** head_ref, const char* data);

#endif /* LINKED_LIST_H */
