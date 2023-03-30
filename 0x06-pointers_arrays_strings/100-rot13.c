#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @n: string parameters
 * Return: n
 */

char *rot13(char *n)
{
	int i;
	int j;
	char datain[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; n[i] != '\0'; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (n[i] == datain[j])
			{
				n[i] = datarot[j];
				break;
			}
		}
	}
	return (n);
}

