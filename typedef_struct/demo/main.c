#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "bento.h"

int main(void) 
{
    char *p = "Chicken";
    char *s = "Rice";
    int c = 300;
    
    bento_t *my_bento = init_bento(p, s, c);
    
    if (my_bento!= NULL) {
        printf("Your lunch is ready!\n");
        printf("Protein: %s\nSide: %s\nCalories: %d\n", my_bento->protein, my_bento->side, my_bento->calories);
        
        /** Remember to free the memory when done */
        free(my_bento->protein);
        free(my_bento->side);
        free(my_bento);
    } else {
        printf("Failed to create bento.\n");
    }
    
    return 0;
}