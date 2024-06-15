#ifndef BENTO_H
#define BENTO_H

#include <stdio.h>

/**
 * struct bento_t - A data structure for representing a meal.
 * @protein: A char string containing the name of the protein component of the meal.
 * @side: A char string containing the name of the side dish component of the meal.
 * @calories: An integer representing the total calorie count of the meal.
 */

typedef struct bento_s
{
    char *protein;
    char *side;
    int calories;
} bento_t;

#endif /* BENTO_H */
