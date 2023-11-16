#include "shell.h"
/**
 * concat - concats user string with PATH member
 * @tmpo: static array to store concatenated
 * @a: pointer to array of user
 * @token: pointer to PATH
 *
 * Return: 0 on success
*/
char *concat(char *tmpo, char **a, char *token)
{
	int ln = 0;

	_memset(tmpo, 0, 256);
	ln = _strlen(token) + _strlen(a[0]) + 2;
	_strcat(tmpo, token);
	_strcat(tmpo, "/");
	_strcat(tmpo, a[0]);
	tmpo[ln - 1] = '\0';
	return (tmpo);
}
