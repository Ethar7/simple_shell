#include "shell.h"
/**
 * string_lenght - returns the length
 * @x: character type
 * Return: integer type
*/
int string_lenght(char *x)
{
	int j;

	while (x[j] != '\0')
		j++;
	return (j);
}
