#include <stdio.h>

/**
 * main - serves as the starting point for program execution.
 *
 * Return: ends the execution of a function, always 0.
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
