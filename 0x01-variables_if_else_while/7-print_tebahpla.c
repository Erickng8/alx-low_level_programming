#include <stdio.h>

/**
 * main - print lowercase in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char val;

	for (val = 'z'; val >= 'a'; val--)
		putchar(val);
	{
		putchar('\n');
	}
	return (0);
}
