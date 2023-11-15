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

	for (j = 0; envi[j]; j++)
	{
		res = _PATHstrcmp(name, envi[j]);
		if (res == 0)
		{
			return (envi[j]);
		}
	}
	return (NULL);
}
