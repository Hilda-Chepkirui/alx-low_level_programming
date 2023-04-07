#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: points to n bytes to be filled
 * @b: constant byte
 * @n: number of of bytes
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
