#include "shell.h"
/**
 * stringcmp - compares two strings
 * @str1: char
 * @str2: char
 * Return: integer value
*/
int stringcmp(const char *str1, const char *str2)
{
	while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 - *str2);
}
