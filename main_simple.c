#include "shell.h"


/**
 * main - runs the simple shell program
 *
 * Return: 0 on success
 */
int main(void)
{
	char *fullpaths = NULL, *cp = NULL, *buf = NULL;
	char *Path = NULL;
	char **a;
	int exitstate = 0;

	signal(SIGINT, SIG_IGN);
	Path = getenviron("PATH");
	if (Path == NULL)
		return (-1);
	while (1)
	{
		a = NULL;
		cmond_prompt();
		buf = read_stdin();
		if (*buf != '\0')
		{
			a = tokenarray(buf);
			if (a == NULL)
			{
				free(buf);
				continue;
			}
			fullpaths = fullpath(a, Path, cp);
			if (checkbuiltinfun(a, buf, exitstate) == 1)
				continue;
			exitstate = _forkpro(a, buf, fullpath);
		}
		else
			free(buf);
	}
	return (0);
}
