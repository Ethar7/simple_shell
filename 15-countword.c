#include "shell.h"
/**
 * stringcount - counts number of words
 * @s: pointer to string to count
 *
 * Return: number of words
*/
int stringcount(char *s)
{
	int x;
	int flag = 1;
	int count = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] != ' ' && flag == 1)
		{
			count++;
			flag = 0;
		}
		if (s[x + 1] == ' ')
			flag = 1;
	}
	return (count);
}
