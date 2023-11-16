#include "shell.h"
/**
 * getenviron - gets PATH member
 * @nam: pointer to PATH
 *
 * Return: pointer to PATH member string or NULL
*/
char *getenviron(const char *nam)
{
	int j, res;

	for (j = 0; environ[j]; j++)
	{
		res = _pathcmp(nam, environ[j]);
		if (res == 0)
		{
			return (environ[j]);
		}
	}
	return (NULL);
}
