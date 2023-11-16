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

	_mem(tmpo, 0, 256);
	ln = string_lenght(token) + string_lenght(a[0]) + 2;
	stringconcat(tmpo, token);
	stringconcat(tmpo, "/");
	stringconcat(tmpo, a[0]);
	tmpo[ln - 1] = '\0';
	return (tmpo);
}
