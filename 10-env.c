#include "shell.h"
/**
 * env - prints the envi
 *
 * Return: 0 on success
*/
int env(void)
{
	int j;

	for (j = 0; environ[j]; j++)
		putss(environ[j]);
	return (0);
}
