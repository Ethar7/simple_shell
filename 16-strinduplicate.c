#include "shell.h"
/**
 * stringdupl - duplicates a string
 * @s: pointer to string
 *
 * Return: pointer to duplicated
*/
char *stringdupl(char *s)
{
	int x;
	char *str;

	if (s == NULL)
		return (NULL);
	for (x = 0; s[x] != '\0'; x++)
		;
	str = malloc(sizeof(char) * (x + 1));
	if (str == NULL)
		return (NULL);
	for (x = 0; s[x] != '\0'; x++)
	{
		str[x] = s[x];
	}
	str[x] = '\0';
	return (str);
}
