#include "shell.h"

/**
 * stringtok - split string
 *
 * @pointer: variable
 * @deli: variable
 * Return: strtok
*/
char *stringtok(char *pointer, const char *deli)
{
	return (strtok(pointer, deli));
}
