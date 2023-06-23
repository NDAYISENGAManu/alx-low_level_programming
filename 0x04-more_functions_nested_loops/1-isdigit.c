#include "main.h"

/**
 * _isdigit - check the input if is digit
 * @x: the number to be checked
 * Return: Always 1 for digit and 0 for other else.
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
