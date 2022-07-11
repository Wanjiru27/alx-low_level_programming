#include "main.h"
/**
 * swap_int - swap two integers
 * @a: pointer to a
 * @b: pointer to b
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
