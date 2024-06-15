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
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
/**
 * _memcpy- copies a specified number of bytes from one memory area
 * to another.
 *
 * @n: the number of memory bytes to be copied.
 *
 * @src: the source of memory to be copied from.
 *
 * @dest: the destination to copy memory to.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest);
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
	int L;
	char *s;
	if (str == (NULL))
	{
        printf("_strdup failed: no string data\n");
		return(NULL);
	}
    L = _strlen(str);
	s = malloc(sizeof(char) * L + 1);
	if (s == NULL)
	{
        printf("_strdup failed: Malloc\n");
		return(NULL);
	}
	_memcpy(s, str, L + 1);
	return(s);
}