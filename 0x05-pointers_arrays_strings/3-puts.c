#include <stdio.h>

/**
 * _puts -Print a string
 * @str: the string to print
 * Retur: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
