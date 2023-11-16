#include "shell.h"
/**
 * tokenarray - creates array of tokens
 * @buf: pointer to use
 *
 * Return: pointer to array
*/
char **tokenarray(char *buf)
{
	char *tok;
	int x = 0, count = 0;
	char *deli = " \n";
	char **a;

	count = _splitstring(buf);
	if (!count)
		return (NULL);
	a = malloc((count + 1) * sizeof(char *));
	if (a == NULL)
		exit(1);
	tok = strtok(buf, deli);
	while (tok != NULL)
	{
		a[x] = _strdup(tok);
		tok = strtok(NULL, deli);
		x++;
	}
	a[x] = NULL;
	return (a);
}
