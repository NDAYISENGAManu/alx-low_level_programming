#include "main.h"
/**
 * print_most_numbers - print the numbers 0 - 9
 * Description: don't print 2 or 4
 * Return: number 0 to 9
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
