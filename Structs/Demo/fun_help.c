#include <stdlib.h>
#include "main.h"

/**
 * _strlen- returns the length of a string.
 *
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}
/**
 * _strdup- copies a string into sufficiently allocated memory and
 * returns a pointer to that space in memory.
 *
 * @str: the string to be copied into memory.
 *
 * Return: if adequate space in memory, returns pointer s. Else returns NULL.
 */

char *_strdup(char *str)
{
	int i, L;
	char *s;

	if (str == (NULL))
	{
        printf("_strdup failed: no string data");
		return(NULL);
	}
    L = _strlen(str);
	s = malloc(sizeof(char) * L + 1);
	if (s == NULL)
	{
        printf("_strdup failed: Malloc");
		return(NULL);
	}
	for (i = 0; i < L; i++)
	{
		s[i] = str[i];
	}
	s[i++] = '\0';
	return(s);
}