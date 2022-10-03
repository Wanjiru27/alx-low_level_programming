#include "main.h"

/**
 * print_line - draw straight line in the terminal
 * followed by new line
 * @n: an input integer
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
