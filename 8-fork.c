#include "shell.h"
/**
 * forkpro - create child process
 * @a: pointer to array of user
 * @buf: pointer to user 
 * @fullpath: pointer to user input
 *
 * Return: 0 on success
*/
int _forkpro(char **a, char *buf, char *fullpath)
{
	int j, state, res, exitstate = 0;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		res = execve(fullpath, a, envi);
		if (res == -1)
		{
			perror(a[0]);
			for (j = 0; a[j]; j++)
				free(a[j]);
			free(a);
			free(buf);
			exit(127);
		}
	}
	wait(&state);
	if (pid == -1)
	{
		perror("error");
		exit(1);
	}
	if (WIFEXITED(state))
	{
		exitstate = WEXITSTATUS(state);
	}
		for (j = 0; a[j]; j++)
			free(a[j]);
		free(a);
		free(buf);
		return (exitstate);
}
