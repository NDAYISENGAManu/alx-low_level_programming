#include "main.h"
/**
 * if is lowercase - shows 1 if input is a
 * lowercase character. Another cases, shows
 * 0
 * @c: the character in ASCII code
 *
 * Retuen : 1 for lowercase and ) for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
