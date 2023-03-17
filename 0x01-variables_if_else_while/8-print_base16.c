#include <stdio.h>

/**
 * main - serves as the starting point for program execution
 *
 * Return: ends the execution of a function, always 0.
 */

int main(void)
{
	int i;
	char a;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (a = 'a' ; a <= 'f' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
