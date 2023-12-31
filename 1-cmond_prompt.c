#include "shell.h"

/**
 * cmond_prompt - writes a command prompt
 *
 * Return: 0
 */
int cmond_prompt(void)
{
	char *cmpr = "$ ";
	ssize_t count = 0;

	if (isatty(STDIN_FILENO) == 1)
	{
		count = write(STDOUT_FILENO, cmpr, 2);
	if (count == -1)
		exit(0);
	}
	return (0);
}
