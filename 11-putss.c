#include "shell.h"
/**
 * putss - prints
 * @string: string
*/
void putss(char *string)
{
int n;

for (n = 0; string[n] != '\0'; n++)
_putchar(string[n]);
_putchar('\n');
}
