#include "linked_list.h"

void add_node(node_t** head_ref, const char* str)
{
    /* Creating a new node with the data to be added */
    node_t *hookshot;
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    
    new_node->data = strdup(str);
    new_node->next = NULL;

    /* Check if the list is empty */
    if (*head_ref == NULL)
    {
        *head_ref = new_node; /* If the list is empty, add the new node as the first node */
    } 
    else
    {
        /* Use hookshot to traverse the list */
        hookshot = *head_ref;
        while (hookshot->next!= NULL)
        {
            hookshot = hookshot->next;
        }
        /* hookshot->next is NULL!
          END OF THE LINE!
          Add the new node */
        hookshot->next = new_node;
    }
}
