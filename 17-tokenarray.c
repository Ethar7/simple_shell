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

	count = stringcount(buf);
	if (!count)
		return (NULL);
	a = malloc((count + 1) * sizeof(char *));
	if (a == NULL)
		exit(1);
	tok = stringtok(buf, deli);
	while (tok != NULL)
	{
		a[x] = stringdupl(tok);
		tok = stringtok(NULL, deli);
		x++;
	}
	a[x] = NULL;
	return (a);
}
