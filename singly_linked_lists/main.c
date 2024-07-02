#include "linked_list.h"
#include <stdio.h>

int main()
{
    node_t *head = NULL;
    
    // Adding nodes one at a time
    add_node(&head, "Try");
    add_node(&head, "Force");
    
    printf("List: ");
    // Correctly initializing hookshot here
    node_t *hookshot = head;
    while (hookshot!= NULL)
    {
        printf("%s -> ", hookshot->data);
        hookshot = hookshot->next;
    }
    printf("End\n");

    // Freeing memory
    while (head!= NULL) 
    {
      //REMEMBER: set the node POINTER hookshot to head
        node_t *hookshot = head;
        head = head->next;
        free(hookshot->data);
        free(hookshot);
    }

    return 0;
}
