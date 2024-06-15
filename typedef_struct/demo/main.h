#ifndef HEADER_H
#define HEADER_H
#include "bento.h"

bento_t* init_bento(char *p, char *s, int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strdup(char *str);
int _strlen(char *s);


#endif