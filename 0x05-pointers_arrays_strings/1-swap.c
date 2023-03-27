#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: int to swapp
 * @b: int to swap
 * Return: always 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
