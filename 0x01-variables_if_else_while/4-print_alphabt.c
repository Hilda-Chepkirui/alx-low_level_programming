#include <stdio.h>

/**
 * main - ends the execution of a function
 *
 * Return: serves as the starting point for program execution
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
