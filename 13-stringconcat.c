#include "shell.h"
/**
 * stringconcat - concatenates two strings
 * @des: char type
 * @sr: char type
 * Return: char type
*/
char *stringconcat(char *des, char *sr)
{
	int x;
	int y;

	for (x = 0; des[x] != '\0'; x++)
		;
	for (y = 0; sr[y] != '\0'; y++, x++)
		des[x] = sr[y];
	des[x] = '\0';
	return (des);
}
