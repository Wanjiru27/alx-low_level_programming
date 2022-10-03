#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, i;

	for (num = 0; num < 9; num++)
	{
		for (i = num + 1; i < 10; i++)
		{
			putchar(num + '0');
			putchar(i + '0');
			if (num == 8 && i == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
