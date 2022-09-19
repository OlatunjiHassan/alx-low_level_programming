#include "main.h"

/**
 * swap_int - swaps values of integers
 *
 * @a: first value
 * @b: second
 *
 * Return: the swap
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
