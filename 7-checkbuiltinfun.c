#include "shell.h"
/**
 * checkbuiltinfun - check if string is a built-in
 * @a: pointer to array
 * @buf: pointer to user
 * @status: exit status of execve
 * Return: 1 if user string is equal to env or 0
*/
int checkbuiltinfun(char **a, char *buf, int status)
{
	int j;

	if (stringcmp(a[0], "env") == 0)
	{
		env();
		for (j = 0; a[j]; j++)
			free(a[j]);
		free(a);
		free(buf);
		return (1);
	}
	else if (stringcmp(a[0], "exit") == 0)
	{
		for (j = 0; a[j]; j++)
			free(a[j]);
		free(a);
		free(buf);
		exit(status);
	}
	else
		return (0);
}
