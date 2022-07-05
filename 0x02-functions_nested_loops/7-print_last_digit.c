#include "main.h"

/**
 * print_last_digit - function that print last digit of number
 * @n: number to be checked
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = ((n < 0 ? -1 : 1) * n) % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
