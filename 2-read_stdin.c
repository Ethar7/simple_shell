#include "shell.h"
/**
 * read_stdin - reads stdin and stores in buffer
 *
 * Return: a pointer
*/
char *read_stdin(void)
{
	ssize_t count = 0;
	size_t x = 0;
	char *buf = '\0';
	int j = 0;

	count = getline(&buf, &x, stdin);
	if (count == -1)
	{
		free(buf);
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
	if (buf[count - 1] == '\n' || buf[count - 1] == '\t')
		buf[count - 1] = '\0';
	for (; buf[j]; j++)
	{
		if (buf[j] == '#' && buf[j - 1] == ' ')
		{
		buf[j] = '\0';
		break;
		}
	}
	return (buf);
}
