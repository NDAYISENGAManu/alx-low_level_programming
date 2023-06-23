#include "main.h"

/**
 * print_line - draw a straight line according to parameter
 * @n: number of terms the character _ should be printed
 */
void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
