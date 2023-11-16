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
	Path = _getenv("PATH");
	if (path == NULL)
		return (-1);
	while (true)
	{
		a = NULL;
		prompt();
		buf = _read();
		if (*buf != '\0')
		{
			a = tokenize(buf);
			if (a == NULL)
			{
				free(buf);
				continue;
			}
			fullpath = _fullpathbuffer(a, path, cp);
			if (checkbuiltins(a, buf, exitstate) == 1)
				continue;
			exitstatus = _forkprocess(a, buf, fullpath);
		}
		else
			free(buf);
	}
	return (0);
}
