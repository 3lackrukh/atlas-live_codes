#include <stdlib.h>
#include <stdio.h>
#include "main.h"

bento_t* init_bento(char *p, char *s, int c)
{
    /** Allocate memory for the struct */
    bento_t *new_bento = (bento_t*)malloc(sizeof(bento_t));
    
    if (new_bento == NULL)
    {
        /** Memory allocation for the struct failed */
        printf("init_bento failed: malloc");
        return NULL;
    }
    
    /** Duplicate the strings for protein and side using strdup */
    new_bento->protein = _strdup(p);
    if (new_bento->protein == NULL)
    {
        /** Memory allocation failed */
        printf("init_bento failed: malloc 'protein'");
        free(new_bento);
        return NULL;
    }

    new_bento->side = _strdup(s);
    if (new_bento->side == NULL) 
    {
        /** Memory allocation failed */
        printf("init_bento failed: malloc 'side'");
        /** Free allocated memory */
        free(new_bento->protein);
        free(new_bento);
        return NULL;
    }
    /** Assign the calories */
    new_bento->calories = c;
    /** Return the newly allocated and initialized struct */
    return new_bento; 
}
