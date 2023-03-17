#include <stdio.h>

/**
 * main - serves as the starting point for program execution
 *
 * Return: ends the execution of a function, always 0.
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
