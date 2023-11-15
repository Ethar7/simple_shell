#include "shell.h"
/**
 * env - prints the envi
 *
 * Return: 0 on success
*/
int env(void)
{
	int j;

	for (j = 0; envi[j]; j++)
		putss(envi[j]);
	return (0);
}
