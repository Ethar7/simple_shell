#include "shell.h"


/**
 * main - runs the simple shell program
 *
 * Return: 0 on success
 */
int main(void)
{
	char *fullpath = NULL, *cp = NULL, *buf = NULL;
	char *Path = NULL;
	char **a;
	int exitstate = 0;

	signal(SIGINT, SIG_IGN);
	Path = getenviron("PATH");
	if (path == NULL)
		return (-1);
	while (true)
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
			fullpath = fullpath(a, path, cp);
			if (checkbuiltinfun(a, buf, exitstate) == 1)
				continue;
			exitstatus = _forkpro(a, buf, fullpath);
		}
		else
			free(buf);
	}
	return (0);
}
