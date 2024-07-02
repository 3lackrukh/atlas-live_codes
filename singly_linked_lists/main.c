#include "linked_list.h"
#include <stdio.h>

int main(void)
{
    node_t *head = NULL;
    node_t *hookshot;
    
    /* Adding nodes one at a time */
    add_node(&head, "Try");
    add_node(&head, "Force");
    
    printf("What does this mean? ");
    /* Correctly initializing hookshot here */
    hookshot = head;
    while (hookshot!= NULL)
    {
        printf("%s -> ", hookshot->data);
        hookshot = hookshot->next;
    }
    printf("<3<3<3\n");

    /* Freeing memory */
    while (head!= NULL) 
    {
        hookshot = head;
        head = head->next;
        free(hookshot->data);
        free(hookshot);
    }
    return(0)
}
