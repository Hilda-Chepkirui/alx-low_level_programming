#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination of byte
 * @src: source of byte
 * @n: number of bytes to be copied
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
