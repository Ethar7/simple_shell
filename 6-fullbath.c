#include "shell.h"
/**
 * fullpath - finds string to call execve
 * @a: pointer to array of user
 * @path: pointer to bath string
 * @cp: pointer copy bath string
 *
 * Return: a pointer to string to call execve on
*/
char *fullpath(char **a, char *path, char *cp)
{
	char *token, *fullpath = NULL, *concatstring = NULL;
	static char tm[256];
	int pathcount = 0, flag = 0, n = 0, token_len = 0;
	struct state x;

	cp = NULL;
	cp = _strdup(path);
	pathcount = _splitPATH(cp);
	token = stringtok(cp, ": =");
	while (token != '\0')
	{
		concatstring = _concat(tm, a, token);
		if (state(concatstring, &x) == 0)
		{
			fullpath = concatstring;
			flag = 1;
			break;
		}
		if (z < pathcount - 2)
		{
			token_len = _strlen(token);
			if (token[token_len + 1] == ':')
			{
				if (state(a[0], &x) == 0)
				{
					fullpath = a[0];
					flag = 1;
					break;
				}
			}
		}
		n++;
		token = stringtok(NULL, ":");
	}
	if (flag == 0)
		fullpath = a[0];
	free(cp);
	return (fullpath);
}