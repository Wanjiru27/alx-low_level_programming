#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all numbers of base 16 in lowercase followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
