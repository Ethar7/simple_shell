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
	struct stat x;

	cp = NULL;
	cp = stringdupl(path);
	pathcount = stringcount(cp);
	token = stringtok(cp, ": =");
	while (token != NULL)
	{
		concatstring = concat(tm, a, token);
		if (stat(concatstring, &x) == 0)
		{
			fullpath = concatstring;
			flag = 1;
			break;
		}
		if (z < pathcount - 2)
		{
			token_len = string_lenght(token);
			if (token[token_len + 1] == ':')
			{
				if (stat(a[0], &x) == 0)
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
