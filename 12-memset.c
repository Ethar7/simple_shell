#include "shell.h"
/**
 * _mem - fills memory with constant byte
 * @a: character array
 * @x: constant byte
 * @c: how many bytes
 * Return: the pointer to the char array
*/
char *_mem(char *a, char x, unsigned int c)
{
unsigned int j;

for (j = 0; j < c; j++)
a[j] = x;
return (a);
}
