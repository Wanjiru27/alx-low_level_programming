#include <stdlib.h>
#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	long int i;
	long int n;
	long int d;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
			i = 1;
		}
	}
	return (0);
}
