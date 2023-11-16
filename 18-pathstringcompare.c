#include "shell.h"
/**
 * _pathcmp - compares PATH with envi
 * @str1: pointer PATH
 * @str2: pointer to envi
 *
 * Return: 0 on success
 */
int _pathcmp(const char *str1, const char *str2)
{
	int x;

	for (x = 0; str2[x] != '='; x++)
	{
		if (str1[x] != str2[x])
			return (-1);
	}
	return (0);
}
