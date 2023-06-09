#include "main.h"

/**
 * _isdigit - checks for digits 0 - 9.
 * @c: int to be checked
 *
 * Return: 1 if digit 0 - 9, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
